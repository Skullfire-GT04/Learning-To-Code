#include <stdio.h>

/*
    There is no concept of OOP in C, it is a purely functional language, the closest
    thing you have to objects in C are called structs, they work like normal objects in 
    OOP languages, that is, they have attributes and methods associated with them.

    The general syntax of defining a struct object in C is like so:

    struct identifier{
        attributes;
        methods;
    };

*/

// Like 

struct Person{
    char* name;
    int age;
};


int main(){

    // here is how you can initialize structs 
    struct Person person1 = {"Alan Michael", 21};

    // here is how you initalize a struct object without specifying all the attributes
    struct Person person2 = {"George Washington"};

    // you can set the properties later using the dot notation like so
    person2.age = 22;

    // here is how you can access the attributes using the dot notation
    printf("Person1.name: %s\n", person1.name);
    printf("Person1.age:  %d\n", person1.age);


    // here is how you can define a struct without a name and initialize some members
    struct{
        char* name;
        char* address;
        int age;
        float salary;
    } employee1, employee2;

    // this is useful for when you want to define a struct which you only want to use once
    // in the above code, employee1 and employee2 are struct variables 

    // you can check like so
    employee1.salary = 3000.00f;
    employee2.salary = 1200.00f;

    return 0;
}