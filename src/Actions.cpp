#include "../include/Actions.h"
#include <iostream>


void Actions::run(std::shared_ptr<Run> r){
    while(window->waitEvent(event)){
		if(!r->running){ continue; }
		// close window
		if (event.type == sf::Event::Closed){
			std::cout << "close\n";
			// window->close();
			r->running = false;
			// return;
		}
		keyPressed(event);
	}
}


void Actions::keyPressed(sf::Event event){
	// key pressed
	if(event.type == sf::Event::KeyPressed){
		std::shared_ptr<MESSAGE::KeyPress> k = std::make_shared<MESSAGE::KeyPress>();
		k->key = keyMap[event.key.code];
		k->pressed = true;
		emit(k);
	}
	// key released
	if(event.type == sf::Event::KeyReleased){
		std::shared_ptr<MESSAGE::KeyPress> k = std::make_shared<MESSAGE::KeyPress>();
		k->key = keyMap[event.key.code];
		k->pressed = false;
		emit(k);
	}

}


Actions::Actions(sf::RenderWindow* w){
    window = w;
	keyMap[sf::Keyboard::Space] = ' ';
	keyMap[sf::Keyboard::A] = 'a';
	keyMap[sf::Keyboard::D] = 'd';
	keyMap[sf::Keyboard::W] = 'w';
	keyMap[sf::Keyboard::S] = 's';
}
