#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    //store thread creation
    //since we have to wait (barrier)
    vector<thread> workers;

    for(int i = 0; i  < 10 ; i++){
        // thread th([](){
        //     cout << "Hi from thread \n" << endl;
        // });
        workers.push_back(thread([](){
            cout << "Hi from thread \n" ;
        }));
    }
    cout << "Hi from Main \n " << endl;
    for_each(workers.begin(), workers.end(), [](thread &th){
        th.join();
    });
    return 0;
}