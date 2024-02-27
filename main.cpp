#include <iostream>
#include "include/Message.h"
#include "include/Messages.h"
#include "include/Actions.h"
#include "include/Utils.h"
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
    MESSAGEBUS->connect(t);

    sf::RenderWindow window(sf::VideoMode(800, 800), "2ombies");
    window.clear();

    Actions a = Actions(&window);
    std::thread keyThread(&Actions::run, &a, RUN);
    keyThread.detach();

    RUN->running = true;
    while (RUN->running && window.isOpen()){
        MESSAGEBUS->run();
    }
    // the above while loop will end when RUN->running = false, at which point close the window
    window.close();
    return 0;
}