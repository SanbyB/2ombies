#include "../include/Sprite.h"
#include <iostream>


Sprite::Sprite(std::string n, std::vector<int> s){
    name = n;
    spriteSheetSize = s;

    int y = s.size();
    int x = 0;
    for(int i = 0; i < y; i++){
        if(s.at(i) > x){
            x = s.at(i);
        }
    }

    if(!spriteTexture.loadFromFile("Graphics/" + name + ".png")){
        std::cout << "Error loading " << name << ".png\n";
    }

    sf::Vector2u imgSz = spriteTexture.getSize();
    imgSize = {imgSz.x / x, imgSz.y / y};
    
    std::cout << "Image loaded of size " << imgSize.at(0) << ", " << imgSize.at(1) << "\n";

    pointer = {0, 0};
}

void Sprite::update(int state){
    std::cout << "state: " << state << "\n";
    if(state >= spriteSheetSize.size()){
        std::cout << "Sprite state out of range " << state << " >= " << spriteSheetSize.size() << "\n";
        state = 0;
    }
    int* x = &pointer.at(0), *y = &pointer.at(1);
    *y = state;
    *x += 1;
    if(*x >= spriteSheetSize.at(*y)){
        *x = 0;
    }
}

sf::Sprite Sprite::image(){
    sf::Sprite s(spriteTexture);
    sf::IntRect rec;
    rec.width = imgSize[0];
    rec.height = imgSize[1];
    rec.left = pointer[0] * imgSize[0];
    rec.top = pointer[1] * imgSize[1];
    s.setTextureRect(rec);

    return s;
}


void Sprite::Pointer(int x, int y){
    pointer = {x, y};
}
std::vector<int> Sprite::Pointer(){
    return pointer;
}

void Sprite::ImgSize(uint x, uint y){
    imgSize = {x, y};
}
std::vector<uint> Sprite::ImgSize(){
    return imgSize;
}

void Sprite::Name(std::string s){
    name = s;
}

std::string Sprite::Name(){
    return name;
}

void Sprite::SpriteSheetSize(std::vector<int> s){
    spriteSheetSize = s;
}
std::vector<int> Sprite::SpriteSheetSize(){
    return spriteSheetSize;
}



