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
        
    private:

        double scale = 5;

};
