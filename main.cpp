#include <SFML/Graphics.hpp>
#include "include/sprite.h"
#include "include/player.h"
#include <iostream>

int main(){

    int count = 0;

    Player player = Player();


    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");

    while (window.isOpen())
    {
        count++;
        if(!(count%200)){
            player.update();
        }
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(255,255,255));
        window.draw(player.getSprite());
        window.display();
    }

    return 0;
}