#pragma once
#include <set>
#include <queue>
#include <memory>

class Message{
public:
    int ID(){ return id; };
protected:
    // unique message identifier
    int id = 0;
};


class MessageConsumer{
public:
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
    void queue(std::shared_ptr<Message> msg);

    // Connects a message consumer to the message bus
    void connect(std::shared_ptr<MessageConsumer> mc);

    // called each clock tick, itterates through the messages currently on the bus and sends them to the consumers
    void run();

private:
    // message bus queue of messages to be delivered
    std::queue<std::shared_ptr<Message>> bus;
    // list of consumers listening to the message bus
    std::vector<std::shared_ptr<MessageConsumer>> consumers = {};
};

class MessageProducer{
public:
    MessageProducer();
    // adds the message to the queue of the message bus
    void emit(std::shared_ptr<Message> msg);

    void setBus(std::shared_ptr<MessageBus> bus);
private:
    std::shared_ptr<MessageBus> msgBus;
};


class MessageProducerConsumer : public MessageProducer, public MessageConsumer {};

// Global messaging bus
inline std::shared_ptr<MessageBus> MESSAGEBUS = std::make_shared<MessageBus>();
