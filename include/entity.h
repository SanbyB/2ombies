#include "sprite.h"
#pragma once

class Entity{
    public:
        Entity();
        ~Entity();

        std::vector<double> getPos();

        sf::Sprite getSprite();
        void setSprite(std::string n, std::vector<int> s);

        void update(int &count);



    private:
        // x, y position of entity
        double x = 0, y = 0;

        // sprite object for the image of the entity
        Sprite sprite;
};

