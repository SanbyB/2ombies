#include "../../include/entities/entity.h"
#include <iostream>

Entity::Entity(){
}

Entity::~Entity(){
}


sf::Sprite Entity::getSprite(){
    sf::Sprite s = sprite.image();
    return s;
}

void Entity::setSprite(std::string n, std::vector<int> s){
    sprite = Sprite(n, s);
}

void Entity::update(int &count){
    if(hp <= 0){
        die();
    }
    if(count == 0){
        sprite.Pointer(0, 0);
        count = 1;
    }
    else if(count == 1){
        sprite.Pointer(1, 0);
        count = 2;
    }
    else if(count == 2){
        sprite.Pointer(2, 0);
        count = 3;
    }
    else{
        sprite.Pointer(1, 0);
        count = 0;
    }
}

void Entity::die(){
    
}

std::vector<double> Entity::getPos(){
    return {x, y};
}

void Entity::applyPhysics(){
    // Gravity
    if(!touchingGround){
        // replace this with gravity constant
        yVel -= g;
    }
    // Friction
    else{
        // replace this with friction constant
        xVel *= mu;
    }
    // Movement
    if(xVel >= maxVelx){
        xVel = maxVelx;
    }
    if(xVel < minVelx){
        xVel = 0;
    }
    if(yVel >= maxVely){
        yVel = maxVely;
    }
    if(yVel < minVely){
        yVel = 0;
    }
    x += xVel;
    y += yVel;
    // Collision with ground

    // Collision with wall
}

void Entity::executive(){
    if(touchingGround){
        if(xVel){
            state = walking;
        }
        else{
            state = breathing;
        }
    }
    else{
        if(yVel < 0){
            state = jumping;
        }
        else if(yVel > 0){
            state = falling;
        }
    }
}