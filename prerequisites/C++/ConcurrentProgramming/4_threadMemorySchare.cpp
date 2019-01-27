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
        void operator()(string& msg){
            cout << "From Functor " << msg << endl;
            msg = "Be positive and be kind to one another !";
        }
};

int main(){

    string s = "Love is beautiful " ;
    // create thread via Functor 
    //Functor fct;
    thread t1((Functor()), ref(s)); //refer uses shared memory, which is not encorage. // use move to copy value
    t1.join();
    cout << "Main thread 2 " << s << endl;
    return 0;
}
