#include "../../include/entities/player.h"
#include "../../include/include.h"
#include <iostream>


Player::Player(){
    setSprite("player", {3});
    maxVelx = PLAYER_VEL;
}

Player::~Player(){

}

void Player::update(){
    Entity::update();
}

sf::Sprite Player::getSprite(){
    sf::Sprite s = Entity::getSprite();
    s.scale(SCALE, SCALE);
    return s;
}

void Player::moveRight(bool direction){
    if(direction){
        xVel += PLAYER_ACC;
        std::cout << CLOCK.timeElapsed() << "\n";
    }
    else{
        xVel -= PLAYER_ACC;
    }
}

void Player::jump(){}