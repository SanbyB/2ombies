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