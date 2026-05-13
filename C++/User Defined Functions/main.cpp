#include <iostream>

/*
The general format for defining functions in C++ is like so:

return data_type function_name(arguments){
    function_body;
}
*/

// Like

// a function to print strings with a new line character at the end
void print(const char* prompt){
    std::cout << prompt << std::endl;
}

// But you see unlike C, C++ allow for function overloading (see notes)

// So something like so:

int add(int a, int b){
    return a + b;
}

float add(float a, float b){
    return a + b;
}

// Both functions defined above have the same name, but their
// function signatures are unique, that's why they are allowed

// You can even have the same return_type and argument_type as long as the number of arguments differ
// Like so

int add(int a, int b, int c){
    return a + b + c;
}

int main(){

    print("Hello World!");
    
    // since we have a version of the add function for int and float
    // we can use the same function name in a generic way
    // that is one feature of function overloading
    int a = add(10, 12);
    float b = add(3.14f, 524.2f);

    // You can use the third add function with a different number
    // of arguments like so
    int c = add(10, 42, 421);

    return 0;
}