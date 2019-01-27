#include <iostream>
#include <thread>

void function1(){
    std::cout << "Thread 1 invoked! \n" << std::endl;
}


int main(){
    function1();

    return 0;
}