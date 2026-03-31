#include <stdio.h>


#define PI 3.14 // these are constant global variables available throughout the source code

static int x = 10; // global static variables are only visible to the file where they are declared
                   // no other source file can access them, so they are useful for encapsulation


void counter(){
    static int count = 1; // a static variable is only instantiated once when the function is called for the first time
                          // all successive calls to the function will retain the previous value of the variable
                          // i.e. consider it a global variable only visible to this function
    printf("%d\n", count);
    count ++;
}


int main(){

    // there is nothing more important than knowing how 
    // variables and their scopes work in a language
    // hence this is the most basic of things to know
    // if you wanna be good at any language broski

    int num1 = 1234; // 16 bits
    char letter = 'a'; // 8 bits

    // 'string' is not an in-built type but you can make strings using character arrays
    const char* name = "Skullfire"; // any size

    float num2 = 3.14566752f; // 32 bits
    short int num3 = -123; // 8 bits

    unsigned short int num4 = 123; // 8 bits
    unsigned int num5 = 3512456; // 16 bits
    long num7 = 213245l; // 32 bits
    long long num6 = 35065652675l; // 64 bits
    unsigned long long int num8 = 4356236562656; // 64 bits

    double num9 = 2452656.2552612; // 64 bits
    long double num10 = 453645256635.4565676; // 80 bits

    printf("%d this is a long double, the biggest variable for numbers.\n", num10);

    // now onto the scopes of variables

    auto int temp = 12; // this is the default scope modifier, this vairable is only visible to the local function where it is defined
    
    counter();
    counter();
    counter();

    // the next type of variables are kind of niche
    // but whatever bruv here ya go

    volatile int x = 13; // volatile tells the compiler that this vairable may undergo changes by external souces during the execution of the program

    // the next is the opposite of volatile is more widely used
    const int y = 134;

    // 'const' tells the compiler that this vairable may not be changed during the execution of the program at any point

    return 0;
}