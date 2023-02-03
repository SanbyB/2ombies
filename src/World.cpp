#include "../include/World.h"

World::World(sf::RenderWindow* w): actions(Actions(w)){
    
}

World::~World(){}


void World::run(){
    actions.run();
    controlPlayer();
    plyr.update();
}

void World::controlPlayer(){
    if(actions.A()){
        plyr.moveRight(false);
    }
    if(actions.D()){
        plyr.moveRight(true);
    }
    if(actions.SPACE()){
        plyr.jump();
    }
}