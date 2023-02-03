#include "../sprite.h"
#include "entity.h"
#pragma once

const double PLAYER_ACC = 0.02;
const double PLAYER_VEL = 10;
const double SCALE = 5;

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

        // make this a global clock
        int clock = 0;

};
