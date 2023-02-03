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
    int xSign = Utils::sign(xVel);
    int xAbs = abs(xVel);
    int ySign = Utils::sign(yVel);
    int yAbs = abs(yVel);

    if(xAbs >= maxVelx){
        xVel = xSign * maxVelx;
    }
    if(xAbs < minVelx){
        xVel = 0;
    }
    if(yAbs >= maxVely){
        yVel = ySign * maxVely;
    }
    if(yAbs < minVely){
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