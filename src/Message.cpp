#include <iostream>
#include "../include/Message.h"

void MessageBus::queue(std::shared_ptr<Message> msg){
    bus.push(msg);
}


void MessageBus::connect(std::shared_ptr<MessageConsumer> mc){
    consumers.push_back(mc);
};

void MessageBus::run(){
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

// Set the default message bus to be the message bus for the producer
MessageProducer::MessageProducer(){ msgBus = MESSAGEBUS; }


void MessageProducer::emit(std::shared_ptr<Message> msg){ 
    if(!msgBus){
        std::cout << "message bus not defined\n";
        return;
    }
    msgBus->queue(msg); }

void MessageProducer::setBus(std::shared_ptr<MessageBus> bus){ msgBus = bus; }
