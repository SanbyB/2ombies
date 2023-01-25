#include "../../include/entities/player.h"


Player::Player(){
    setSprite("player", {3});
}

Player::~Player(){

}

void Player::update(){
    Entity::update(count);
}

sf::Sprite Player::getSprite(){
    sf::Sprite s = Entity::getSprite();
    s.scale(scale, scale);
    return s;
}