#include <iostream>

int main(){

    double a = -0.6;

    double* x = &a;

    double y = 0.0;

    if(*x){
        std::cout << x << " : " << *x << "x\n";
    }
    if(y){
        std::cout << "y\n";
    }

    return 0;
}