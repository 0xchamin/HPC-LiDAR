#include <iostream>
#include <thread>
#include <string>
#include <mutex>
//#include <ofstream>

using namespace std;

class Stack{
    int* data;
    mutex _mu;
    public:
        void pop(); // pop off tos elem
        int& top(); // return item on tep
};

void function_2(stack& st){
    int v = st.top();
    st.pop();
}

class LogFile{
    mutex m_mutex;
    ofstream f;
public:
    LogFile(){
            f.open('log.txt');
        }
    // need destructor to close file 
    void shared_print(string id, int value){
        lock_guard<mutex> locker(m_mutex);
        f << "from " << id << ": " << value << endl; 
    }
    /***
     * Never do
    */
   //return f to outside world
   ofstream& getStream(){ return f; }

   //never pass f as an argument to {user} provided function 
   void processf(void fun(ofstream&)){
       //fun(f);
   }
};

void function_1(){
    for(int i = 0; i> -100; i--){
        log.shared_print(string("From t1 : "), i);
    }
}


int main(){
    LogFile log;
    thread t1(function_1, ref(log));

    for(int i = 0; i<100; i++){
        log.shared_print(string("From main : "), i); 
    }
    t1.join();
    return 0;
}