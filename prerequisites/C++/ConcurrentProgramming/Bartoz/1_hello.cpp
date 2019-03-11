#include <iostream>
#include <thread>

using namespace std;

void threadFunc(){
    cout << "Hi from NEW thread \n";
}



int main(){
    //thread th(&threadFunc);
    thread th ([] ()
        {
            cout << "Hi from NEW thread :) \n";
        });
    cout << "Hi from MAIN thread ! \n";
    th.join();
    return 0;
}