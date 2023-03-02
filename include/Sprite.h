#include <SFML/Graphics.hpp>
#include <vector>
#include "../include/include.h"
#pragma once

class Sprite{
    public:
        /**
         * args: 
         * n- name of sprite (needs to match name of img
         * in Graphics folder)
         * s- spriteSheetSize
        */
        Sprite(std::string n, std::vector<int> s);

        Sprite();

        ~Sprite();

        // returns current image of the sprite
        sf::Sprite image();

        // updates the pointer of the sprite,
        // the state is equivalent to the row of the spriteSheet
        void update(int state);        

        // Getter Setter methods

        // set the current index of the spriteSheet
        void Pointer(int x, int y);
        // get the current index of the spriteSheet
        std::vector<int> Pointer();

        // set the size of each img on the spriteSheet
        void ImgSize(uint x, uint y);
        // get the size of each img on the spriteSheet
        std::vector<uint> ImgSize();

        // set the name of the sprite object
        std::string Name();

        // set the size of the spriteSheet <cols in row i>
        void SpriteSheetSize(std::vector<int> s);
        // get the size of the spriteSheet
        std::vector<int> SpriteSheetSize();


    protected:

        std::string name;
        
        // size of sprite sheet, each entry to the
        // vector is how many images there are per line
        std::vector<int> spriteSheetSize;

    private:
        
        // size of each image in pixels
        std::vector<uint> imgSize;

        // the image from the graphics folder
        sf::Texture spriteTexture;

        // coordinate of which image to use
        std::vector<int> pointer;

};