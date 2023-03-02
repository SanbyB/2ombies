#include <SFML/Graphics.hpp>
#include "include/World.h"
#include "include/Clock.h"
#include <iostream>

Clock c = Clock();

// Global pointer to the game clock
Clock* CLOCK = &c;

int main(){
    // move to render
    sf::RenderWindow window(sf::VideoMode(800, 800), "2ombies");

    window.clear();

    // // move this to world
    // Player player = Player();
    // // move this to a game class (controls everything, world, render, actions, scripting?)
    // Actions actions = Actions(&window);

    World world = World(&window);

    // move this to game
    while (window.isOpen()){

        CLOCK->run();

        world.run();
        world.render();
    }

    return 0;
}
