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

    std::cout << "I bit you the fondest of adieu mademoiselle" << std::endl;

    return 0;
}