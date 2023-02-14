#include "../Sprite.h"
#pragma once

enum states { breathing, walking, falling, jumping, attacking };

class Entity{
    public:
        Entity();
        ~Entity();

        std::vector<double> getPos();

        sf::Sprite getSprite();
        void setSprite(std::string n, std::vector<int> s);

        void update();

    protected:
        double dt;

        // x, y position of entity
        double x = 0, y = 0;

        double xVel = 0, yVel = 0;
        double maxVelx = 5, maxVely = 20;
        double minVelx = 0.005, minVely = 0.005;

        // state of the entity
        states state = breathing;

        // manages states
        void executive();

        // gravity
        const double g = 0.01;
        // friction
        double mu = 0.002;

        // if the entity is in contact with the ground
        bool touchingGround = true;

        // sprite object for the image of the entity
        Sprite sprite;

        // health of entity, if = 0 entity dies
        double hp;

        // method called when hp <= 0
        void die();

        // applies gravity, friction, movement
        void applyPhysics();

        
        void updateSprite();

        // used as scaling factor for flipping sprite img
        int direction = 1;

    private:

        int counter = 0;

};

