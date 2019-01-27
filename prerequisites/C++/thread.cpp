#include <iostream>
#include <thread>

void threadFunction(){
    std::cout << "Hello from Thread 1 \n"; 
}

int main(){
    //create thread object
    std::thread th(&threadFunction);
    std:: cout << "Hello World ! \n";
    th.join();
    return 0;
}

//COMPILE 
// g++ -W -Wall -pedantic -o programName -p sourceFile.cpp
// g++ -W -Wall -pedantic -o thread -pthread thread.cpp -std=c++11