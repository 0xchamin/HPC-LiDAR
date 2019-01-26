#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>

// compile with gcc -o forkAndJoin fork_adv.c 
int main(int ac, char *av[]){
    pid_t childPIDorZero = fork();
    if(childPIDorZero < 0){
        perror("fork error!");
        exit(-1);
    }
    if(childPIDorZero != 0){
        //parent code 
        printf("Im the parent, pid = %d, and my child PID is %d \n", getpid(), childPIDorZero);
        wait(NULL); //waiting until the child process complete execution
        printf("Child process has done execution \n");
    }else{
        //child code 
        printf("I'm the child process, my PID is %d , my parent pid is %d \n", getpid(), getppid());
        execl("/bin/echo", "echo", "Hello CK! all is good \n", NULL);// execl make sure that child tread ends in side the else condition
    }

    printf("Everyting done !\n");
    return 0;
}