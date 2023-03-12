/**
 * Organises all the interactions between objects
 * Each interacting object should have an instance 
 * of the World, either a pointer or reference ???
*/
#pragma once

#include "entities/player.h"
#include "entities/zombie.h"
#include "wall.h"
#include "Actions.h"
#include "Camera.h"
#include "Background.h"
#include "Utils.h"


class World{
    public:
    
        World(sf::RenderWindow* w);

        ~World();

        void window(sf::RenderWindow* w){ win = w; };

        void run();

        // Player* player(){ return &plyr; }


        // draws everything on the window
        // maybe move to own class
        void render();

        

    private:
        Camera cam;
        
        sf::RenderWindow* win;

        Player plyr = Player(); // Note only render player if on screen

        void controlPlayer();

        std::vector<Zombie> zombies = {}; // Note only render Zombies on screen

        std::vector<Wall> walls = {}; // Note only load walls when loading terrain, and only render the walls on screen

        // actions should be owned by the game and this should be a pointer/ reference to it
        Actions actions;

        void updateCamera();

        // change these to background objects
        Background Background0 = Background("back0", 0);
        Background Background1 = Background("back1", 1);
        Background Background2 = Background("back2", 1.1);
        Background Background3 = Background("back3", 1.2);
        Background Background4 = Background("back4", 1.3);

        sf::Sprite bg0;
        sf::Sprite bg01;
        sf::Sprite bg1;
        sf::Sprite bg02;
        sf::Sprite bg2;
        sf::Sprite bg03;
        sf::Sprite bg3;
        sf::Sprite bg04;
        sf::Sprite bg4;
        sf::Sprite bg05;
        sf::Sprite bg5;

};