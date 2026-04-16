#include <stdio.h>
#include <stdlib.h>


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

    // you can cast to float like so
    float i = (float) 124;

    // for casting string to other data types
    // there are some functions defined in the stdlib.h header

    // for converting string to int
    int j = atoi("1243");
    printf("j: %d\n", j);

    // for converting string to long
    long k = atol("1623521");
    printf("k: %ld\n", k);
    // or
    char* temp = "425656"; // the string to be casted
    char* temp2; // this one is for the function to use as it pleases
    k = strtol(temp, &temp2, 10); // here 10 is the base for conversion
    printf("k: %ld\n", k);

    // for conversion to long long
    long long l = atoll("42962562246");
    printf("l: %lld\n", l);
    
    // for conversion to float from string
    temp = "4525.5245";
    float m = strtof(temp, &temp2);
    printf("m: %f\n", m);

    // for conversion to double from string
    temp = "3.134151546";
    double n = strtod(temp, &temp);
    printf("n: %f\n", n);

    return 0;
}