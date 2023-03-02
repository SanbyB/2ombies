#include <vector>


class Camera{
    public:
        Camera();

        ~Camera();

        void setPos(int x, int y);

        std::vector<int> getPos();
    

    private:
        // coords of camera
        int xPos = 0, yPos = 0;

};