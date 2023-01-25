#include "../../include/entities/entity.h"
#include <iostream>

Entity::Entity(){
}

Entity::~Entity(){
}


sf::Sprite Entity::getSprite(){
    sf::Sprite s = sprite.image();
    return s;
}

void Entity::setSprite(std::string n, std::vector<int> s){
    sprite = Sprite(n, s);
}

void Entity::update(int &count){
    if(hp <= 0){
        die();
    }
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

void Entity::die(){
    
}