#include "../../include/entities/player.h"
#include <iostream>


Player::Player(){
    setSprite("player", {3});
    maxVelx = PLAYER_VEL;
}

Player::~Player(){

}

void Player::update(){
    clock++;
    if(!(clock % 300)){
        Entity::update();
        std::cout << x << ", " << y << "\n";
    }
}

sf::Sprite Player::getSprite(){
    sf::Sprite s = Entity::getSprite();
    s.scale(SCALE, SCALE);
    return s;
}

void Player::moveRight(bool direction){
    if(direction){
        xVel += PLAYER_ACC;
    }
    else{
        xVel -= PLAYER_ACC;
    }
}

void Player::jump(){}