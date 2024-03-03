#include "../../include/Entities/Entity.h"


void Entity::update(){
    double drag = friction * vel.mag() * vel.mag();
    Vector dragForce = acc.norm() * drag;
    acc = acc - dragForce;
    vel = vel + acc;
    pos = pos + vel;
}