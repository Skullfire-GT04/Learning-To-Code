#include <stdio.h>
#include <string.h>

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


int main(){

    char name[100];
    print("Hello world!");
    get_input(name, "What is your name:");
    printf("Hello there %s\n", name);

    return 0;
}