#pragma once
#include <memory>

class Run{
public:
    bool running;
};


inline std::shared_ptr<Run> RUN = std::make_shared<Run>();
inline std::shared_ptr<sf::RenderWindow> win = std::make_shared<sf::RenderWindow>(sf::VideoMode(800, 800), "2ombies");
