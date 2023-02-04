#include "../include/Utils.h"


int Utils::sign(int n){
    if(n < 0){
        return -1;
    }
    else if(n){
        return 1;
    }
    return 0;
}

int Utils::sign(double n){
    if(n < 0){
        return -1;
    }
    else if(n){
        return 1;
    }
    return 0;
}

double Utils::abs(double n){
    if(n < 0){ return -n; }
    return n;
}