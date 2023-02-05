#include "SFML/Graphics.hpp"
#pragma once

class Clock{
    public:
        Clock();

        ~Clock();
        
        // returns the time elapsed between last clock cycle
        int64_t timeElapsed();
        
        // runs the clock
        void run();


    private:
        sf::Clock clk;

        int64_t dt = 0;        

};