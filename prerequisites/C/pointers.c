#include <stdio.h>

int main(int argc, char *argv[]){
    int n;
    int *k; //declare points 
    //pointers store an address of a variable 
    k = &n; //assign the address of variable n to pointer variable k;
    // k = 3 is wrong

    n = 25;
    

    printf("n = %d \n", n);
    printf("address of k  = %p \n", k);
    printf("value stored at address k is %d \n", *k);

    return 0;
}