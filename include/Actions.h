#pragma once
#include <SFML/Graphics.hpp>

class Actions{
    public:
        Actions(sf::Window* w);

        Actions();

        ~Actions();

        void run();

        void Window(sf::Window *w){ window = w; };

        bool A(){ return a; }
        bool W(){ return w; }
        bool D(){ return d; }

    private:
        void keyPressed(sf::Event event);

        sf::Window* window;

        sf::Event event;

        bool w = false;
        bool a = false;
        bool d = false;

};