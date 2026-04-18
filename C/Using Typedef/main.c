#include <stdio.h>


int main(){

    // typedef is used to define custom data-types in C
    // Like 

    typedef int marks;
    
    // now the word 'marks' can be used in place of the 'int' data type
    // like so

    struct Student{
        marks score;
        int id;
    };

    // the format for using typedef is really simple, like so:
    // typedef data-type new-name;

    // typedef is especially useful with structs (see notes), since you can 
    // define a struct name as new-type and use it normally like so

    typedef struct {
        char* name;
        char* secret_identity;
        int age;
        char* power;
    } Hero;
    // here 'Hero' is the type associated with the struct defined above and not a variable;

    // Now you can use Hero as a data-type like so
    Hero batman = {"Bruce Wayne", "The Dark Knight", 32, "Money"};
    Hero hulk = {"Bruce Banner", "The Incredible Hulk", 40, "Power"};

    return 0;
}