#include "../../include/entities/entity.h"
#include "../../include/Utils.h"
#include "math.h"
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
    // TODO make constant
    dt = (double)CLOCK->timeElapsed() / 500;

    // update the sprite
    if((CLOCK->count() / 100000) != counter){
        sprite.update(state);
    }

    if(hp <= 0){
        die();
    }
    applyPhysics();

    // TODO make constant
    counter = CLOCK->count() / 100000;
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
    // replace this with friction constant
    if(xVel){
        xVel -= mu * xVel * dt;
    }
    
    
    // Movement
    if(Utils::abs(xVel) >= maxVelx){
        xVel = Utils::sign(xVel) * maxVelx;
    }
    if(Utils::abs(yVel) >= maxVely){
        yVel = Utils::sign(yVel) * maxVely;
    }
    x += xVel * dt;
    y += yVel * dt;

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