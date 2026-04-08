#include <stdio.h>


int main(){

    // the most basic of loops use goto statements
    int i = 0;
    start:
    i++;
    printf("i: %d\n", i);
    if(i < 10) goto start;

    // the second type of loops are while loops
    // they are better than goto loops for they are easier to implement
    // and debug, generally goto loops and goto statements in general are deprecated 

    // Format is:
    /*
    while(test-condition){
        .
        .
        .
        (change expression)
        .
        .
    }
    */  

    printf("Reset i.\n");

    i = 0;
    while(i <= 10){
        i++;
        printf("i: %d\n", i);
    }

    // if you want the loop to execute before the test-condition is evaluated you use the do-while loop
    // Format is:

    /*
    do{
        .
        .
        .
    }while(test-condition);
    */
    
    printf("Again rest i.\n");

    i = 0;

    do{
        i++;
        printf("i: %d\n", i);
    }while(i < 10);

    // the last kind of loops are for loops, these are the most customizable ones 
    // and usually I prefer to use these
    // Format is:

    /*
    for(initialization-segment; test-condition; change expression){
        .
        .
        ...
    }
    */

    printf("Reset i again.\n");

    for(int j = 100, i = 0; i < j; j -= 2, i++){
        printf("i: %d\n", i);
    }

    return 0;
}