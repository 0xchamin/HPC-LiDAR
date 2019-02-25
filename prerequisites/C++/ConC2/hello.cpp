#include <iostream>
#include <thread>

/**
 *  g++ -W -Wall -pedantic -o thread -pthread hello.cpp -std=c++11
 *  
 * */

using namespace std; 

void threadFunction(){
    cout << "Hello from thread \n";
}

int main(){
    thread t(&threadFunction);
    cout << "Hello World ! \n";
    return 0;
}