#include "../include/Camera.h"

Camera::Camera(){}

Camera::~Camera(){}

void Camera::setPos(int x, int y){
    xPos = x;
    yPos = y;
}

std::vector<int> Camera::getPos(){
    return {xPos, yPos};
}