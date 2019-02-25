#include <iostream>
#include <thread>

using namespace std; 

void threadFunction(){
    cout << "Hello from thread \n";
}

int main(){
    thread t(&threadFunction);
    cout << "Hello World ! \n";
    return 0;
}