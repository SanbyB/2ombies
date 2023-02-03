/**
 * Organises all the interactions between objects
 * Each interacting object should have an instance 
 * of the World, either a pointer or reference ???
*/

#include "entities/player.h"
#include "entities/zombie.h"
#include "wall.h"
#include "Actions.h"



class World{
    public:
    
        World(sf::RenderWindow* w);

        ~World();

        void window(sf::RenderWindow* w){ win = w; };

        void run();

        Player* player(){ return &plyr; }

    private:

        sf::RenderWindow* win;

        Player plyr = Player(); // Note only render player if on screen

        void controlPlayer();

        std::vector<Zombie> zombies = {}; // Note only render Zombies on screen

        std::vector<Wall> walls = {}; // Note only load walls when loading terrain, and only render the walls on screen


        // actions should be owned by the game and this should be a pointer/ reference to it
        Actions actions;
};