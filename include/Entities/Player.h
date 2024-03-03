#include "Entity.h"
#include "../Messages.h"
#pragma once

class Player : public Entity, public MessageProducerConsumer{
public:
    Player();

    std::shared_ptr<Sprite> getSprite(){ return sprite; }

    void update();

    virtual void deliver(std::shared_ptr<Message> msg);
private:
    // Ensure the state enum matches the sprite sheet
    enum STATE{
        IDLE,
        WALK,
        RUN,
        ATTACK,
        THROW
    };

    int state = STATE::IDLE;

    void updateState();
};