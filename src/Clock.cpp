#include "../include/Clock.h"

Clock::Clock(){}

Clock::~Clock(){}

void Clock::run(){
    dt = clk.getElapsedTime().asMicroseconds();
    cnt += dt;
    clk.restart();
}

int64_t Clock::timeElapsed(){
    return dt;
}

uint Clock::count(){
    return cnt;
}