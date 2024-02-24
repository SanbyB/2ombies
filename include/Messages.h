#pragma once
#include "Message.h"
#include <iostream>


enum MessageIDs{
    TESTMESSAGE,
    KEYPRESS
};


class TestMessage : public Message {
public:
    TestMessage(){id = MessageIDs::TESTMESSAGE;};
    ~TestMessage(){};

    int data;
};


class KeyPress : public Message {
public:
    KeyPress(){ id = MessageIDs::KEYPRESS; };
    ~KeyPress(){};
    
    char key;
    bool pressed = true;
};

class TestConsumer : public MessageConsumer {
public:
    TestConsumer(){ids.insert(MessageIDs::KEYPRESS);};
    ~TestConsumer(){};

    void deliver(std::shared_ptr<Message> m){
        std::shared_ptr<KeyPress> msg = std::static_pointer_cast<KeyPress>(m);
        printf("KeyPressed received %c, %d\n", msg->key, msg->pressed);
    };
};