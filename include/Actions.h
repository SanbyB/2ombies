#pragma once
#include <SFML/Graphics.hpp>

class Actions{
    public:
        Actions(sf::RenderWindow* w);

        ~Actions();

        void run();

        void Window(sf::RenderWindow *w){ window = w; };
        
        sf::RenderWindow* window;

        bool A(){ return a; }
        bool SPACE(){ return space; }
        bool D(){ return d; }

    private:
        void keyPressed(sf::Event event);

        

        sf::Event event;

        bool space = false;
        bool a = false;
        bool d = false;

};