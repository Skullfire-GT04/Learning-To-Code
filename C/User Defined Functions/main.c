#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/*

What is a function in the first place?

Well in terms of memory a function is just a pointer to a block of code
in data, so you can pass function as pointers as arguments to other functions
(see pointers notes).


A user-defined function needs three things
(i) A name
(ii) A return type
(iii) Arguments (Input to the function)

and of course you need to define the function as well, but that is not a 
necessity in C, in C you can declare function and define them later,
you can even use them without defining them
*/


// a simple function mimicking the print function of python
void print(const char* prompt){
    printf("%s\n", prompt);
}


// a simple function to ger user input as string
void get_input(char* out, const char* prompt){
    char buf[100];
    while(1){
        print(prompt);
        fgets(buf, sizeof(buf), stdin);
        buf[strcspn(buf, "\n")] = '\0';
        if(!strlen(buf)){
            print("Please enter something!");
            continue;
        }
        break;
    }
    strcpy(out, buf);
}

// You can even make variadic functions in C like so:
int sum(int count, ...){
    // the '...' argument represents a variable number of arguments
    // to access them we use the stdarg header's va_list data type
    // like so
    va_list args; // now args represents the ... arguments

    // we need to initialize a va_list data_type using the va_start macro like so
    va_start(args, count); // we need to provide the first arguments passed into the function to the va_start macro

    // now we can access args using the va_arg macro, each call to va_arg returns subsequent 
    // values in the args data_type like so:

    int sum = 0;
    for(int i = 0; i < count; i++){
        sum += va_arg(args, int); // the second argument is the data_type we are expecting to get
    }
    return sum;
}


int main(){

    char name[100];
    print("Hello world!");
    get_input(name, "What is your name:");
    printf("Hello there %s\n", name);

    // Let's use the variadic function defines above
    int sum1 = sum(5, 1, 23, 3, 10, 2);
    int sum2 = sum(7, 32, 54, 1, 3, 56, 4, 2);

    printf("Sum1 : %d, Sum2 : %d\n", sum1, sum2);

    return 0;
}