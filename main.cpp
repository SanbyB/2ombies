#include <SFML/Graphics.hpp>
#include "include/World.h"
#include "include/Clock.h"
#include <iostream>

Clock c = Clock();

int main(){
    // remove this
    int count = 0;

    // move to render
    sf::RenderWindow window(sf::VideoMode(800, 800), "2ombies");

    // // move this to world
    // Player player = Player();
    // // move this to a game class (controls everything, world, render, actions, scripting?)
    // Actions actions = Actions(&window);

    World world = World(&window);

    // move this to game
    while (window.isOpen()){

        c.run();
        int64_t elapsed = c.timeElapsed();

        // move this to world
        world.run();

        // std::cout << actions.A() << "\t" << actions.D() << "\t" << actions.SPACE() << "\n";

        // move these to a render class
        window.clear(sf::Color(50,100,255));
        window.draw(world.player()->getSprite());
        window.display();
    }

    return 0;
}
