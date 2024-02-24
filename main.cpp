#include <iostream>
#include "include/Message.h"
#include "include/Messages.h"

// MESSAGEBUS = std::make_shared<MessageBus>();
class Test : public MessageConsumer{
public:
    Test(){
        ids.insert(MessageIDs::TESTMESSAGE);
    }

    void deliver(std::shared_ptr<Message> m){
        if(m->id == MessageIDs::TESTMESSAGE){
            std::shared_ptr<TestMessage> t = std::static_pointer_cast<TestMessage>(m);
            std::cout << "Message received with data: " << t->data << "\n";
        }
    }
};

int main(){
    std::shared_ptr<Test> t = std::make_shared<Test>();

    MESSAGEBUS->connect(t);
    MessageProducer p = MessageProducer();
    // p.setBus(MESSAGEBUS);
    std::shared_ptr<TestMessage> msg = std::make_shared<TestMessage>();
    msg->data = 6;

    p.emit(msg);
    MESSAGEBUS->run();
    return 0;
}