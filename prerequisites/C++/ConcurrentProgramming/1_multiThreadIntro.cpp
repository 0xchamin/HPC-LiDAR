#include <iostream>
#include <thread>

void function1(){
    std:: cout << "Thread Invoked ! \n" << std:: endl;
}

int main(){
    std:: thread t1(function1); // strat mainthread running
    
    //t1.join(); //main thread waits for t1 to finish 
    //std:: cout << "Main thread waited until child thread finishes" << std:: endl;

    t1.detach(); // main thread can freely run on it's own 
    std:: cout << "Main thread does not waited until child thread finishes. " << std:: endl;
    //std:: cout << "Child thread become a deamon process. " << std:: endl;
    //getchar();

    if(t1.joinable())
        t1.join();
        
    return 0;
}