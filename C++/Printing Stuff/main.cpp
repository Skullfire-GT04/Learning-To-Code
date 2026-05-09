#include <iostream>

// In C++ the iostream library provides all the functions for 
// doing input and output operations, and also provide operations for printing stuff
// on the console

int main(){

    // here std stands for "standard" and is used to reference the standard library
    std::cout << "Hello, world !" << std::endl;

    // cout should be read as "Console out"
    // endl is basically the same as '\n' or a newline character but it is better to use std::endl

    std::cout << "Here is some more example of using cout " << 12 << " idk why I printed 12, ig i just wanted to ig gng." << std::endl;

    // you can also print error message using std::cerr which should be 
    // read as "standard error" like so
    std::cerr << "Nothing biggie, but we lost the launch codes Mr president." << std::endl;

    // you can also print default log messages like so
    std::clog << "Hello there, I am a log message, nothing to see here keep moving" << std::endl;
    // std::clog should be read as "standard console log"

    // here is how you can print numbers onto the console
    std::cout << "Here is a number for ya : " << 2 << std::endl;

    // here is how you can print a floating point number onto the console
    std::cout << "Here is a floating point number for ya: " << 3.143656f << std::endl;

    // here is how you can print boolean values to the console are true and false instead of 1 and 0
    std::boolalpha;
    std::cout << "True : " << true << std::endl;
    std::cout << "False : " << false << std::endl;

    // here is how you can show the positive sign when printing positive numbers
    std::showpos;
    std::cout << "Here is a positive number for ya: " << 142456 << std::endl;    

    std::cout << "I bit you the fondest of adieu mademoiselle" << std::endl;

    return 0;
}