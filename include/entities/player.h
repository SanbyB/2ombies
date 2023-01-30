#include "../sprite.h"
#include "entity.h"
#pragma once

class Player: public Entity{
    public:
        Player();
        
        ~Player();

        // get rid
        int count = 0;

        void update();

        sf::Sprite getSprite();

        // if 'direction' is true then the player moves right
        // if 'direction' is false then the player moves left
        void moveRight(bool direction);

        // player jumps if touching floor
        void jump();
        
    private:

        const double scale = 5;

};
