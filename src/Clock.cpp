#include "../include/Clock.h"

Clock::Clock(){}

Clock::~Clock(){}

void Clock::run(){
    dt = clk.getElapsedTime().asMicroseconds();
    clk.restart();
}

int64_t Clock::timeElapsed(){
    return dt;
}