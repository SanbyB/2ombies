#include "../include/player.h"
#include <iostream>


Player::Player(){
}

Player::~Player(){

}

sf::Sprite Player::getSprite(){
    sf::Sprite s = sprite.image();
    s.scale(4, 4);
    return s;
}

void Player::update(){
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