#include <stdio.h>

// this is the second most important thing you must know
// if you wanna be good at programming in any language


int main(){

    int a = 10;
    int b = 4;

    // basic arthematic operations on integers

    int c = a + b; // addition
    int d = a - b; // subtraction
    float e = (float) a / b; // division and type casting
    int f = a * b; // multiplication
    int g = a % b; // modulo operation

    // basic arthematic operations on real numbers

    float num1 = 3.1465;
    float num2 = 43.2145;

    float num3 = num1 + num2; // addition
    float num4 = num2 - num1; // subtraction
    float num5 = num1 / num2; // multiplication
    float num6 = num2 * num1; // division
    
    // you can't perform module operations on floating point numbers in C

    // bitwise operations
    int b1 = 2;
    int b2 = 4;

    int b3 = 2 | 4; // bitwise OR
    int b4 = 2 & 4; // bitwise AND
    int b5 = 4 ^ 2; // bitwise XOR
    int b6 = 2 << 1; // bitwise LEFT shift
    int b7 = 4 >> 1; // bitwise RIGHT shift

    // increment and decrement operations

    int d1 = 2;
    // d = d + 1;
    // or
    d++;
    // or
    // d += 1;

    int d2 = 12;
    // d = d - 1;
    // or
    d--;
    // or 
    // d -= 1;

    int d3 = 56;
    // d3 = d3 * 2;
    // or
    d3 *= 2;

    int d4 = 10;
    // d4 = d4 / 10;
    // or
    d4 /= 10;
    
    int d5 = 10;
    // d5 = d5 % 5;
    // or
    d5 %= 5;

    // when using these operators in expressions you have to be careful
    // because the order matters like so
    int h = a++; // this assigns a to h then increments a by 1
    a--;
    int i = ++a; // this increments a by 1 then assigns the new value to i

    printf("%d, %d", h, i);

    // here h = 10, i = 11 so order matters

    return 0;
}