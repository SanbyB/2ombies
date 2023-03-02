#include "../../include/entities/player.h"
#include <iostream>


Player::Player(){
    setSprite("player", {2, 4});
    maxVelx = PLAYER_VEL;
}

Player::~Player(){

}

void Player::update(){
    Entity::update();
}

sf::Sprite Player::getSprite(){
    sf::Sprite s = Entity::getSprite();
    s.scale(direction * SCALE, SCALE);
    if(direction < 0){
        s.setPosition(sprite.ImgSize()[0] * SCALE, y);
    }
    return s;
}

void Player::moveRight(bool direction){
    if(direction){
        xVel += PLAYER_ACC * dt;
    }
    else{
        xVel -= PLAYER_ACC * dt;
    }
}

void Player::jump(){}