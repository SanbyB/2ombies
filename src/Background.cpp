#include "../include/Background.h"


Background::Background(std::string n, double rate):Sprite(n, {1}){
    name = n;
    spriteSheetSize = {1};
    paralaxRate = rate;
}

Background::~Background(){}