#pragma once
#include <SFML/Graphics.hpp>
#include "Message.h"
#include "Messages.h"
#include "Utils.h"
#include <map>

class Actions : public MessageProducer{
    public:
        Actions(sf::RenderWindow* w);

        // CALLED IN A SEPARATE THREAD, constantly updates the keys that are pressed
        void run(std::shared_ptr<Run> r);

        void Window(sf::RenderWindow *w){ window = w; };
        
        // window that the game is run in
        sf::RenderWindow* window;

    private:
        // called in the run function to determine keypresses
        void keyPressed();

        sf::Event event;

        // map from sf::Keyboard enum to related char
        std::map<char, sf::Keyboard::Key> keyMap;

        // map of chars that are pressed or not
        std::map<char, bool> keys;
};