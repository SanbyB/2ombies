#include "../include/Actions.h"
#include <iostream>


void Actions::run(){
    if(RUN->running){
		if(window->pollEvent(event)){
			if(!RUN->running){ return; }
			// close window
			if (event.type == sf::Event::Closed){
				RUN->running = false;
			}
			keyPressed();
		}
	}
}


void Actions::keyPressed(){

	std::shared_ptr<MESSAGE::KeyPress> k = std::make_shared<MESSAGE::KeyPress>();

	for(auto it = keys.begin(); it != keys.end(); it++){
		// if the key is pressed check if it's been released
		if(keys[it->first]){
			// if the key is released
			if(!sf::Keyboard::isKeyPressed(keyMap[it->first])){
				// emit key released message
				k->key = it->first;
				k->pressed = false;
				keys[it->first] = false;
				emit(k);
			}
		}
		// if the key is not pressed check if it's been pressed
		else{
			// if the key is pressed
			if(sf::Keyboard::isKeyPressed(keyMap[it->first])){
				// emit key pressed message
				k->key = it->first;
				k->pressed = true;
				keys[it->first] = true;
				emit(k);
			}
		}
	}

}


Actions::Actions(std::shared_ptr<sf::RenderWindow> w){
    window = w;
	keyMap[' '] = sf::Keyboard::Space;
	keyMap['a'] = sf::Keyboard::A;
	keyMap['d'] = sf::Keyboard::D;
	keyMap['w'] = sf::Keyboard::W;
	keyMap['s'] = sf::Keyboard::S;

	// init all the keys pressed to false
	for (auto it = keyMap.begin(); it != keyMap.end(); it++){
		keys[it->first] = false;
	}
}
