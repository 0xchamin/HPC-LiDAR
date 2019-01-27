#include <thread>
#include <iostream>

int main(){
    std:: thread th([] (){
        std:: cout << "Hi, I'm from thread ! \n";
    });
    std:: cout << "Hi, Main Method thread ! \n";
    th.join();
    return 0;
}