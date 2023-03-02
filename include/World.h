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
// #include "Background.h"


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
        Sprite Background0 = Sprite("back0", {1});
        Sprite Background1 = Sprite("back1", {1});
        Sprite Background2 = Sprite("back2", {1});
        Sprite Background3 = Sprite("back3", {1});
        Sprite Background4 = Sprite("back4", {1});
        
};