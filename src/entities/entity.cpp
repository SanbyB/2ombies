#include "../../include/entities/entity.h"
#include "../../include/Utils.h"
#include <iostream>

Entity::Entity(){
}

Entity::~Entity(){
}


sf::Sprite Entity::getSprite(){
    sf::Sprite s = sprite.image();
    s.setPosition(x, y);
    return s;
}

void Entity::setSprite(std::string n, std::vector<int> s){
    sprite = Sprite(n, s);
}

void Entity::update(){
    if(hp <= 0){
        die();
    }
    // this needs compacting and probably moving to sprite
    // if(count == 0){
    //     sprite.Pointer(0, 0);
    //     count = 1;
    // }
    // else if(count == 1){
    //     sprite.Pointer(1, 0);
    //     count = 2;
    // }
    // else if(count == 2){
    //     sprite.Pointer(2, 0);
    //     count = 3;
    // }
    // else{
    //     sprite.Pointer(1, 0);
    //     count = 0;
    // }
    applyPhysics();
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
    if(Utils::abs(xVel) >= maxVelx){
        
        xVel = Utils::sign(xVel) * maxVelx;
    }
    if(Utils::abs(yVel) >= maxVely){
        yVel = Utils::sign(yVel) * maxVely;
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