#include "../sprite.h"
#pragma once

class Entity{
    public:
        Entity();
        ~Entity();

        std::vector<double> getPos();

        sf::Sprite getSprite();
        void setSprite(std::string n, std::vector<int> s);

        // remove count from this
        void update(int &count);



    private:
        // x, y position of entity
        double x = 0, y = 0;

        // sprite object for the image of the entity
        Sprite sprite;

        // health of entity, if = 0 entity dies
        double hp;

        // method called when hp <= 0
        void die();
};

