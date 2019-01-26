#include <unistd.h>
#include <stdio.h>

int main(){
    int x = 1;
    int returnValue = fork();

    //fork returns 2 values
    if(returnValue == 0){
        //execture Chile process 
        printf("Chiild process, x = %d \n", ++x);
    }else{
        //execture parent
        printf("Parent process, x = %d \n", --x);
    }
    printf("Exist  thread wit x = %d \n", x);
    return 0; 
    //compile gcc -wall -werror -o fork fork.c 
    //gcc -o test hello.cpp 
}

/**
======= Result ========
Parent process, x = 0
Exist main thread wit x = 0
Chiild process, x = 2
Exist main thread wit x = 2
**/