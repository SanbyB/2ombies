#include "../include/Background.h"


Background::Background(std::string n, double rate){
    name = n;
    spriteSheetSize = {1};
    paralaxRate = rate;
}

Background::~Background(){}