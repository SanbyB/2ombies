#include <SFML/Graphics.hpp>
#include <vector>
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
        

        // Getter Setter methods
        void Pointer(int x, int y);
        std::vector<int> Pointer();


        void ImgSize(uint x, uint y);
        std::vector<uint> ImgSize();


        std::string Name();

        void SpriteSheetSize(std::vector<int> s);
        std::vector<int> SpriteSheetSize();


    private:

        std::string name;
        
        // size of each image in pixels
        std::vector<uint> imgSize;

        // size of sprite sheet, each entry to the
        // vector is how many images there are per line
        std::vector<int> spriteSheetSize;

        // the image from the graphics folder
        sf::Texture spriteTexture;

        // coordinate of which image to use
        std::vector<int> pointer;

};