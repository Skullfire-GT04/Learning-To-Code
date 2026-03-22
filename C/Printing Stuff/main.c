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

    // Output formatting
    // printf provides a powerful way to format output in c

    // For integers
    // the format is %wd 
    // w = width 

    int x = 78423;

    printf("%d\n", x); // normal
    printf("%10d\n", x); // with formatting (right justified)
    printf("%-10d\n", x); // left justified
    printf("%010d\n", x); // padded with zeroes

    // for characters
    // the format is %wc
    // w = width

    char c = 'a';

    printf("%c\n", c); // normal
    printf("%10c\n", c); // formatted (right justified)

    // for floating point numbers
    // the format is % w.p f
    // w = width, p = precision

    float a = 124.23445f;

    printf("%f\n", a); // normal
    printf("%10.3f\n", a); // formatted (right justified)
    printf("%-7.3f\n", a); // formatted (left justified)
    printf("%.3f\n", a); // only precision specified

    // you can also print floating point numbers in scientific notation like so
    // the format is the same

    printf("%10.6e\n", a);


    // for strings
    // the format is %w.p s
    // w = width, p = count or number of character to be printed

    const char* s = "This is a string exmaple.";

    printf("%s\n", s); // normal
    printf("%20.12s\n", s); // formatted (right justified)
    printf("%-20.15s\n", s); // formatted (left justified)
    printf("%.10s\n", s); // only count specified


    // subsituting values for width or precision or count in formatted output

    /*
    in printf it is possible to provide the values for w and p via 
    variable or expressions like so

    printf("%*.*f", width, precision, num);

    here '*' symbol is used to subsitute the value which will be replaced by width and precision repectively
    */

    // like
    printf("%.*s\n", 12, s); // here 12 is the count value 

    // or
    printf("%*.*f", 8, 5, a); // here 8 is the width and 5 is the precision

    return EXIT_SUCCESS;
}