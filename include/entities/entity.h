#include "../sprite.h"
#pragma once

enum states { breathing, walking, falling, jumping, attacking };

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

        double xVel = 0, yVel = 0;
        const double maxVelx = 5, maxVely = 20;
        const double minVelx = 0.001, minVely = 0.001;

        // state of the player
        states state = breathing;

        // manages states
        void executive();

        // gravity
        const double g = 0.01;
        // friction
        const double mu = 0.9;

        // if the entity is in contact with the ground
        bool touchingGround = false;

        // sprite object for the image of the entity
        Sprite sprite;

        // health of entity, if = 0 entity dies
        double hp;

        // method called when hp <= 0
        void die();

        // applies gravity, friction, movement
        void applyPhysics();
};

