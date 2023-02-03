#include "../include/Actions.h"
#include <iostream>

/**
 * Consider using sorted list for faster removal of key presses
*/

void Actions::run(){
    while(window->pollEvent(event)){
            // close window
            if (event.type == sf::Event::Closed){
                window->close();
            }
            keyPressed(event);
	}
}


void Actions::keyPressed(sf::Event event){
	if(event.type == sf::Event::KeyPressed){
		switch (event.key.code){
		case sf::Keyboard::Space : space = true; break;
		case sf::Keyboard::A : a = true; break;
		case sf::Keyboard::D : d = true; break;
		}
	}
	// key released
	if(event.type == sf::Event::KeyReleased){
		switch (event.key.code){
		case sf::Keyboard::Space : space = false ; break;
		case sf::Keyboard::A : a = false ; break;
		case sf::Keyboard::D : d = false ; break;
		}
	}

}


Actions::Actions(sf::RenderWindow* w){
    window = w;
}

Actions::~Actions(){}