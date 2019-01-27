#include <iostream>
#include <thread>
#include <string>

using namespace std;

void function1(){
    cout << "Thread invoked !" << endl;
    for(int i = 0; i> -100; i--){
        cout << "Invoked thread " << i << endl;
    }
}

int main(){
    thread t1(function1);

    for(int i = 0; i< 60 ; i++){
        cout << "From MAIN " << i << endl;
    }

    t1.join();
    return 0;
}