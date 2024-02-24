#pragma once
#include <set>
#include <queue>
#include <memory>
#include <iostream>

class Message{
public:
    Message(){};
    ~Message(){};
    // unique message identifier
    int id = 0;
};


class MessageConsumer{
public:
    MessageConsumer(){};
    ~MessageConsumer(){};

    int test;

    std::set<int> getIds(){ return ids; };

    // all message consumers define a deliver function that will
    // format the msg passed to it from the message bus
    virtual void deliver(std::shared_ptr<Message> msg) = 0;
protected:
    // set of message ids that this class listens to
    std::set<int> ids;
};


class MessageBus {
public:
    // Takes a message and adds it to the message bus
    void queue(std::shared_ptr<Message> msg){ bus.push(msg); };

    // Connects a message consumer to the message bus
    void connect(std::shared_ptr<MessageConsumer> mc){
        consumers.push_back(mc);
    };

    // called each clock tick, itterates through the messages currently on the bus and sends them to the consumers
    void run(){
        // itterates through the messages on the bus
        while(!bus.empty()){
            // removes the messages as it itterates
            std::shared_ptr<Message> m = bus.front();
            bus.pop();
            // checks all the consumers to see if the message id is consumed by them
            for(auto c : consumers){
                std::set<int> ids = c->getIds();
                // if the consumer consumes the given message id, call the deliver function
                if(ids.count(m->id)){
                    c->deliver(m);
                }
            }
        }
    };

private:
    // message bus queue of messages to be delivered
    std::queue<std::shared_ptr<Message>> bus;
    // list of consumers listening to the message bus
    std::vector<std::shared_ptr<MessageConsumer>> consumers = {};
};

std::shared_ptr<MessageBus> MESSAGEBUS = std::make_shared<MessageBus>();


class MessageProducer{
public:
    MessageProducer(){ msgBus = MESSAGEBUS; };
    ~MessageProducer(){};
    // adds the message to the queue of the message bus
    void emit(std::shared_ptr<Message> msg){ msgBus->queue(msg); };

    void setBus(std::shared_ptr<MessageBus> bus){ msgBus = bus; };
private:
    std::shared_ptr<MessageBus> msgBus;
};


class MessageProducerConsumer : public MessageProducer, public MessageConsumer {};

