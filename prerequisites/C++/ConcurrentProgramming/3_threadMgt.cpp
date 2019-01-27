#include <iostream>
#include <thread>

using namespace std;
 // name

void function1(){
    cout << "Thread Invoked ! \n" << endl;
    //  for (int i = 0; i< 40 ; i++){
    //     cout << "from invoked thread " << i << endl; 
    // }
}

class Functor{
    public:
        void operator()(string msg){
            cout << "From Functor " << msg << endl;
            // for(int j = 0; j>-200; j--){
            //     cout << "from functor ONE threads " << j << endl;
            // }
        }
};

int main(){

    string s = "Love is beautiful" ;

    //create thread object via regular function
    thread t1(function1);

    // create thread via Functor 
    Functor fct;
    thread t2(fct, s);

    
    // for (int i = 0; i< 100 ; i++){
    //     cout << "from main " << i << endl; 
    // }

    // main thread doing some work while new invoked thread does it task
    // always map parent thread work with try catch block 
    try{
        cout << "from Main " << s << endl;
        cout <<"Main thread !" << endl;
        // for (int i = 0; i< 100 ; i++){
        //     cout << "from main thread " << i << endl; 
        // }
    }catch(...){
        t1.join();
        t2.join();
        throw;
    }
    
    t1.join();
    t2.join();
    return 0;
}