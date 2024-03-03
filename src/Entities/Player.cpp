#include "../../include/Entities/Player.h"

// make configurable
double runThreshold = 10;
double walkThreshold = 5;

Player::Player(){
    ids.insert(MessageIDs::KEYPRESS);
    std::vector<int> spriteSheet = {8};
    sprite = std::make_shared<Sprite>(std::string("Viking"), spriteSheet);

}

void Player::deliver(std::shared_ptr<Message> msg){
    if(msg->ID() == MessageIDs::KEYPRESS){
        auto m = std::static_pointer_cast<MESSAGE::KeyPress>(msg);
        
    }
}

void Player::update(){
    Entity::update();
    updateState();
    if(!sprite){
        std::cout << "[Player] sprite not set\n";
        return;
    }
    sprite->update(state);
}

void Player::updateState(){
    if(vel.mag() > walkThreshold){
        if(vel.mag() > runThreshold){
            state = STATE::RUN;
        }
        else{
            state = STATE::WALK;
        }
    }
    else{
        state = STATE::IDLE;
    }
}