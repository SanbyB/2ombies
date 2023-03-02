#include "../../include/entities/entity.h"
#include "../../include/Utils.h"
#include "math.h"
#include <iostream>

int COUNT_RATE = 300000;

Entity::Entity(){
}

Entity::~Entity(){
}


sf::Sprite Entity::getSprite(){
    sf::Sprite s = sprite.image();
    // s.setPosition(x, y);
    return s;
}

void Entity::setSprite(std::string n, std::vector<int> s){
    sprite = Sprite(n, s);
}

void Entity::update(){
    
    // TODO make constant
    dt = (double)CLOCK->timeElapsed() / 500;

    executive();
    updateSprite();
    applyPhysics();

    if(hp <= 0){
        die();
    }
    
    // TODO make constant
    counter = CLOCK->count() / COUNT_RATE;
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

    if(xVel > 0){
        direction = -1;
    }
    if(xVel < 0){
        direction = 1;
    }

    // Collision with ground

    // Collision with wall
}

void Entity::executive(){
    if(touchingGround){
        if(abs(xVel) > minVelx){
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

void Entity::updateSprite(){
    // update the sprite
    if((CLOCK->count() / COUNT_RATE) != counter){
        sprite.update(state);
    }
}
