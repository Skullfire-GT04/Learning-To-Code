#include <iostream>


int main(){

    // let's start with the classic while loop
    // the format is :
    /*

    while(test-condition is true){
        .
        .
        .
    }

    */

    // Like
    int i = 1;
    while(i <= 10){
        std::cout << "i : " << i << ((i % 2 == 0) ? " (even)" : " (odd)") << std::endl;
        i++;
    }

    // Next is the do while loop
    // the format is :
    /*
    do{
        .
        .
        .
    }while(test-condition is true)
    
    */

    // Like
    int input = 0;
    do{
        std::cout << "Enter a number between 1 and 5 (inclusive)" << std::endl;
        std::cin >> input;
    }while(input < 1 || input > 5);

    std::cout << "So you rate this program " << input << " out of 5" << std::endl;

    // Next is the for loop
    // the format is:
    /*
    for(variable declarations; test-condition(s); change operation(s)){
        .
        .
        .
    }
    
    */
    // Like
    for(int i = 0, j = 0; i <= 10 || j <= 20; i++, j += 3){
        std::cout << "i : " << i << ", j : " << j << std::endl;
    }

    // the next is a for-in loop
    // the format is:
    /*
    for(data_type variable : iterable){
        .
        .
        .
    }
    */
    // Like
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i : arr){
        std::cout << "i : " << i;
        std::cout << " i * i : " << i * i << std::endl;
    }


    return 0;
}