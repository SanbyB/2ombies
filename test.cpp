// C++ program to demonstrate
// multithreading using three
// different callables.
#include <iostream>
#include <thread>
#include <memory>
#include <unistd.h>

class boolean{
public:
    bool b;
};

 
// A dummy function
void foo(std::shared_ptr<boolean> r)
{
    while(r->b){
        std::string s;
        std::cout << "input string\n";
        std::cin >> s;
        std::cout << "you wrote: " << s << "\n";
        if(s == "1"){
            r->b = false;
        }
    }
}
 
// Driver code
int main()
{   
    std::shared_ptr<boolean> run = std::make_shared<boolean>();
    run->b = true;
    
    std::cout << "before\n";
    // This std::thread is launched by using
    // function pointer as callable
    std::thread th1(foo, run);
 
    th1.detach();

    std::cout << "after\n";
    while(run->b){
        std::cout << "hello\n";
        sleep(5);
    }
 
    return 0;
}