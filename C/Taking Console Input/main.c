#include <stdio.h>
#include <stdlib.h>



int main(){

    // you know nowadays most people would find using an app from the console
    // to be cucumbersome and primitive, this is the age of GUI's after all
    // but still knowing how to give output through the console is a must for all
    // programmers

    char* name[100];
    int age;

    printf("Enter you name and age:");

    // scanf can take many inputs in one function call
    // it returns the number of input correctly given
    // unlike other languages, C doesn't give an error 
    // when the user enters invalid input, so it is always
    // nice to use this feature to check whether the user gave
    // the correct input

    if (scanf("%s %d", &name, &age) == 2){
        printf("Correct Input !\n");
    }else{
        perror("Invalid input !");
        return EXIT_FAILURE;
    }

    printf("Hello %s, so you are %d years old.\n", name, age);

    return EXIT_SUCCESS;
}