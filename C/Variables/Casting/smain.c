#include <stdio.h>

// let us learn how to cast different data types into one another
// and whether it is even possible to do so for some data types

int main(){

    // the basic format of casting in C is like so (data-type-to-be-casted-into) value;

    // so something like so

    int a = (int) 241.15;
    printf("Value of a: %d\n", a);

    // you can cast int to float or double and vice-versa

    // you can also cast chars to int like so
    char c = 'z';
    int d = (int) c;

    printf("c: %c, d: %d\n", c, d);

    // but be careful when casting int to char
    // because c only supports ascii characters, the limit for int to char casting is from 0 - 255

    int e = 400;
    char f = (char) e; // so something like this will produce weird results

    // here you can check like so
    printf("f: %c\n", f);

    /*
    Ok truth be told int and char are interchangeable, that is they can be used without casting in expressions like so
    */
    int g = 'a' - 'z'; // this is perfectly valid C syntax

    // or something like this
    char h = 122 - 10;

    // you can check them like so
    printf("h: %c\n", h);

    return 0;
}