#include "../include/player.h"


Player::Player(){
    setSprite("player", {3});
}

Player::~Player(){

}

void Player::updt(){
    update(count);
}