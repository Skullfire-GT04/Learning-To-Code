#include <stdio.h>
#include <stdlib.h>

int main(){

    // printf is the standard way to print something on the console
    // it is defined in the stdio header
    printf("Hello, world!\n");

    // you can use subsitution for printing stuff, like so

    printf("I am %04d years old.\n", 19);

    // or you can use a variable like so

    const char* name = "Skullfire-GT04";

    printf("My github name is %s.\n", name);

    // you can also use floating point numbers as subsitution during printing

    const float num1 = 2.142354f; // the 'f' is to indicate that this is a float not a double to the compiler

    printf("Here is a random number %04.2f\n", num1);

    // now say you want to print something which indicates an error has occured
    // you do so like so

    perror("Something went wrong !");
    // perror should be read as "print error"

    // now Idk why would you wanna print a single character on the console
    // but here is how you do it

    putc('D', stdout);
    putc('a', stdout);
    putc('m', stdout);
    putc('\n', stdout);

    // there is another way to put single character on the console 

    putchar('Y');
    putchar('e');
    putchar('a');
    putchar('h');
    putchar('\n');

    return EXIT_SUCCESS;
}