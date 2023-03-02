#include "Sprite.h"

class Background: public Sprite{
    public:
        Background(std::string n, double rate);
        ~Background();

    private:
        // rate at which the Background moves when the camera moves
        // if == 0 then it doesn't move
        // if == 1 then it moves at the same rate as the camera
        double paralaxRate = 0;

};

