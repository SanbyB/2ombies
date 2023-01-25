#include "sprite.h"
#include "entity.h"
#pragma once

class Player: public Entity{
    public:
        Player();
        
        ~Player();

        int count = 0;

        void updt();


    private:
        

};
