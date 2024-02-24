#pragma once
#include "Message.h"


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