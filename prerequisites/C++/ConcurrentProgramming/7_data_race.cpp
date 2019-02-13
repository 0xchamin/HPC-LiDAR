#include <iostream>
#include <thread>
#include <string>
#include <mutex>

using namespace std;
mutex mu;

void shared_print(string msg, int id){
    lock_guard<mutex> guard(mu); //RAII 
    cout << msg << id  << endl; 
}

int main(){
    thread t1;

    for(int i =0; i< 100; i++){

    }

    t1.join();
    return 0;
}