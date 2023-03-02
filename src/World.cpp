#include "../include/World.h"
#include <iostream>

World::World(sf::RenderWindow* w): actions(Actions(w)){
    win = w;
}

World::~World(){}


void World::run(){
    actions.run();
    controlPlayer();
    plyr.update();
    updateCamera();
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

void World::updateCamera(){
    std::vector<double> pos = plyr.getPos();
    cam.setPos(pos.at(0), pos.at(1));
}

void World::render(){
    sf::Sprite bg0 = Background0.image();
    bg0.scale(800.0 / 256.0, 800.0 / 256.0);
    sf::Sprite bg1 = Background1.image();
    bg1.scale(800.0 / 512.0, 800.0 / 512.0);
    sf::Sprite bg2 = Background2.image();
    bg2.scale(800.0 / 512.0, 800.0 / 512.0);
    sf::Sprite bg3 = Background3.image();
    bg3.scale(800.0 / 512.0, 800.0 / 512.0);
    sf::Sprite bg4 = Background4.image();
    bg4.scale(800.0 / 512.0, 800.0 / 512.0);

    sf::IntRect rec;
    rec.width = 800;
    rec.height = 800;
    std::vector<int> camPos = cam.getPos();
    rec.left = camPos.at(0);
    rec.top = camPos.at(1);
    bg1.setTextureRect(rec);
    rec.left *= 1.1;
    bg2.setTextureRect(rec);
    rec.left *= 1.2;
    bg3.setTextureRect(rec);
    rec.left *= 1.3;
    bg4.setTextureRect(rec);

    // bg1.scale(2.56, 2.56);
    // bg2.scale(2.56, 2.56);
    // bg3.scale(2.56, 2.56);
    // bg4.scale(2.56, 2.56);   

    win->clear(sf::Color(50,100,255));
        

    win->draw(bg0);
    win->draw(bg1);
    win->draw(bg2);
    win->draw(bg3);
    win->draw(bg4);

    win->draw(plyr.getSprite());
    win->display();
}