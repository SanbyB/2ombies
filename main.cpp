#include <iostream>
#include "include/Message.h"
#include "include/Messages.h"
#include "include/Actions.h"
#include "include/Utils.h"
#include "include/Sprite.h"
#include "include/Entities/Player.h"
#include <thread>

class Test : public MessageConsumer{
public:
    Test(){
        ids.insert(MessageIDs::KEYPRESS);
    }

    void deliver(std::shared_ptr<Message> m){
        if(m->ID() == MessageIDs::KEYPRESS){
            std::shared_ptr<MESSAGE::KeyPress> t = std::static_pointer_cast<MESSAGE::KeyPress>(m);
            std::cout << "Message received with data: " << t->key << ", " << t->pressed << "\n";
        }
    }
};

int main(){
    std::shared_ptr<Test> t = std::make_shared<Test>();
    Actions a = Actions(win);
    std::shared_ptr<Player> p = std::make_shared<Player>();

    MESSAGEBUS->connect(t);
    MESSAGEBUS->connect(p);

    RUN->running = true;
    while(RUN->running){
        MESSAGEBUS->run();
        a.run();
        p->update();
        std::cout << "pos: " << p->position().vec().at(0) << ", " << p->position().vec().at(1) << "\n";
        std::cout << "vel: " << p->velocity().vec().at(0) << ", " << p->velocity().vec().at(1) << "\n";
        std::cout << "acc: " << p->acceleration().vec().at(0) << ", " << p->acceleration().vec().at(1) << "\n";
        win->clear();
        win->draw(p->getSprite()->image());
        win->display();
    }
    // the above while loop will end when RUN->running = false, at which point close the window
    win->close();
    return 0;
}