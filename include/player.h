#include "sprite.h"
#pragma once

class Player{
    public:
        Player();
        
        ~Player();

        std::vector<double> getPos();

        sf::Sprite getSprite();

        // to be removed

        int count = 0;
        void update();



    private:
        // x, y position of player
        double x = 0, y = 0;

        // sprite object for the image of the player
        Sprite sprite = Sprite("player", {3});
        

};
