/*
Hello world C
*/
#include <stdio.h> // directive passed by pre-processor
/*
Directives include a file (a system header)
*/

int main()
{
    printf("Hello World");
    
    int a;
    int b;
    int c;
    a = 5;
    b = 2;
    printf("\n");
    c = a*b;
    printf("Value C is %d",c);
    printf("\n");
    printf("mult of a and c is %d", a*c);
    //printf(sizeof(a));
    //printf(sizeof(int));

    // //Implicit casting 
    // int i = 17;
    // char c = 'c'; // ascii value is 99
    // int sum;

    // sum = i*c; 
    // //printf(sum);

    // int j,k;
    // int result ;
    // j=1;
    // k=3;
    // result= (int)j/k;
    // printf(result);

    // double result2; 
    // result2=(double) j/k;
    // printf(result2);


    // const vs volatile 



    return 0; //0 indicate success, -1 is the standard for false
}