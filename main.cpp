#include <SFML/Graphics.hpp>
#include "include/sprite.h"
#include "include/entities/player.h"
#include "include/Actions.h"
#include <iostream>

int main(){
    // remove this
    int count = 0;

    // move to render
    sf::RenderWindow window(sf::VideoMode(800, 800), "2ombies");

    // mode this to world
    Player player = Player();
    // move this to a game class (controls everything, world, render, actions, scripting?)
    Actions actions = Actions(&window);

    // move this to game
    while (window.isOpen()){
        // move this to world
        actions.run();


        // remove this
        count++;
        if(!(count%300)){
            player.update();
        }

        std::cout << actions.A() << "\t" << actions.D() << "\t" << actions.SPACE() << "\n";

        // move these to a render class
        window.clear(sf::Color(255,255,255));
        window.draw(player.getSprite());
        window.display();
    }

    return 0;
}
