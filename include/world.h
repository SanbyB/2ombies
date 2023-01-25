/**
 * Organises all the interactions between objects
 * Each interacting object should have an instance 
 * of the World, either a pointer or reference ???
*/

#include "entities/player.h"
#include "entities/zombie.h"
#include "wall.h"



class World{
    public:
        World();

        ~World();

    private:
        Player player = Player(); // Note only render player if on screen

        std::vector<Zombie> zombies = {}; // Note only render Zombies on screen

        std::vector<Wall> walls = {}; // Note only load walls when loading terrain, and only render the walls on screen

};