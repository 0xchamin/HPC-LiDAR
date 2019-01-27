#include <iostream>
#include <thread>

using namespace std;

class Functor{
    public:
        void operator()(string& msg){
            cout << "From Functor " << msg << endl;
            msg = "Be positive and be kind to one another !";
        }
};

int main(){

    string s = "Love is beautiful " ;

    //get parent thread id
    //cout << "Parent thread id "<< this_thread::get_id() << endl;

    /**
     * in threading passing by value and 
     * passing by reference is not encourage
     * copy -> move() [safe and efficient]
     * 
     * */

    thread t1((Functor()), move(s));
    // get child thread id 
    //cout << "Child thread id " << t1.get_id() << endl;

    //threads cannot copy or assign , 
    //thread t2 = t1;  --> not allowed
    //use move()
    //thread t2 = move(t1);

    t1.join(); // now use t2.join() as t1 is not available now 
    cout << "Main thread 2 " << s << endl;
     return 0;
}
