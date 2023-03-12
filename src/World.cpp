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
    double winX = win->getSize().x;
    double winY = win->getSize().y;

    bg0 = Background0.image();
    // bg01 = Background1.image();
    bg1 = Background1.image();
    // bg02 = Background2.image();
    bg2 = Background2.image();
    // bg03 = Background3.image();
    bg3 = Background3.image();
    // bg04 = Background4.image();
    bg4 = Background4.image();

    bg0.scale(winX / Background0.ImgSize().at(0), winY / Background0.ImgSize().at(1));
    // bg01.scale(winX / Background1.ImgSize().at(0), winY / Background1.ImgSize().at(1));
    bg1.scale(winX / Background1.ImgSize().at(0), winY / Background1.ImgSize().at(1));
    // bg02.scale(winX / Background2.ImgSize().at(0), winY / Background2.ImgSize().at(1));
    bg2.scale(winX / Background2.ImgSize().at(0), winY / Background2.ImgSize().at(1));
    // bg03.scale(winX / Background3.ImgSize().at(0), winY / Background3.ImgSize().at(1));
    bg3.scale(winX / Background3.ImgSize().at(0), winY / Background3.ImgSize().at(1));
    // bg04.scale(winX / Background4.ImgSize().at(0), winY / Background4.ImgSize().at(1));
    bg4.scale(winX / Background4.ImgSize().at(0), winY / Background4.ImgSize().at(1));

    sf::RectangleShape rec;
    sf::RectangleShape rec1;
    sf::RectangleShape rec2;
    sf::RectangleShape rec3;
    sf::RectangleShape rec4;

    sf::RectangleShape rec01;
    sf::RectangleShape rec02;
    sf::RectangleShape rec03;
    sf::RectangleShape rec04;
    
    rec.setSize({800, 800});
    rec1.setSize({800, 800});
    rec2.setSize({800, 800});
    rec3.setSize({800, 800});
    rec4.setSize({800, 800});

    rec01.setSize({800, 800});
    rec02.setSize({800, 800});
    rec03.setSize({800, 800});
    rec04.setSize({800, 800});

    std::vector<int> camPos = cam.getPos();
    // std::cout << -1 * double(camPos.at(0) % int(winX)) << "\n";
    rec.setTexture(bg0.getTexture());
    
    rec01.setTexture(bg1.getTexture());
    rec01.setPosition(double(-camPos.at(0) % int(winX)) + Utils::sign(camPos.at(0)) * winX, 0);
    rec1.setTexture(bg1.getTexture());
    rec1.setPosition(double(-camPos.at(0) % int(winX)), 0);

    rec02.setTexture(bg2.getTexture());
    rec02.setPosition(double(-int(1.1 * camPos.at(0)) % int(winX)) + Utils::sign(camPos.at(0)) * winX, 0);
    rec2.setTexture(bg2.getTexture());
    rec2.setPosition(double(-int(1.1*camPos.at(0)) % int(winX)), 0);

    rec03.setTexture(bg3.getTexture());
    rec03.setPosition(double(-int(1.2 * camPos.at(0)) % int(winX)) + Utils::sign(camPos.at(0)) * winX, 0);
    rec3.setTexture(bg3.getTexture());
    rec3.setPosition(double(-int(1.2*camPos.at(0)) % int(winX)), 0);

    rec04.setTexture(bg4.getTexture());
    rec04.setPosition(double(-int(1.5 * camPos.at(0)) % int(winX)) + Utils::sign(camPos.at(0)) * winX, 0);
    rec4.setTexture(bg4.getTexture());
    rec4.setPosition(double(-int(1.5*camPos.at(0)) % int(winX)), 0);

    win->clear(sf::Color(50,100,255));
        

    win->draw(rec);
    win->draw(rec1);
    win->draw(rec01);
    win->draw(rec2);
    win->draw(rec02);
    win->draw(rec3);
    win->draw(rec03);
    win->draw(rec4);
    win->draw(rec04);


    win->draw(plyr.getSprite());
    win->display();
}
