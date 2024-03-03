#include <vector>
#include "../Sprite.h"
#include "../Utils.h"
#include <iostream>
#pragma once

class Entity{
public:
    Entity(){};
    Entity(std::shared_ptr<Sprite> s){ sprite = s; }
    Vector position(){ return pos; }
    Vector velocity(){ return vel; }
    Vector acceleration(){ return acc; }

    void setSprite(std::shared_ptr<Sprite> s){ sprite = s; }

protected:
    Vector pos = Vector({0, 0});
    Vector vel = Vector({0, 0});
    // external acceleration from control
    Vector acc = Vector({0, 0});
    double friction = 1;
    std::shared_ptr<Sprite> sprite;

    void update();
};