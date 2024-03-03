#include <iostream>
#include "include/Message.h"
#include "include/Messages.h"
#include "include/Actions.h"
#include "include/Utils.h"
#include "include/Sprite.h"
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
    Sprite sp = Sprite("Viking", {4});
    Actions a = Actions(win);

    MESSAGEBUS->connect(t);

    RUN->running = true;
    while(RUN->running){
        MESSAGEBUS->run();
        a.run();
        win->clear();
        win->draw(sp.image());
        win->display();
    }
    // the above while loop will end when RUN->running = false, at which point close the window
    win->close();
    return 0;
}