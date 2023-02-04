#include "SFML/Graphics.hpp"
#pragma once

class Clock{
    public:
        Clock();

        ~Clock();

        int64_t timeElapsed();
        
        void run();


    private:
        sf::Clock clk;

        int64_t dt = 0;

        

};