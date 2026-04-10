#include <stdio.h>
#include <math.h>

// macros should be defined at the top of your program like so

// look at the pre-processed version of this code in this folder to see how the 
// pre-processor turns this code code into a simpler version, i.e. resolves the macro references

#define PI 3.14159265359

#define COMP(x, y) (x) > (y) ? (x) : (y)


float calc_area(float radius){
    return PI * powf(radius, 2);
}


int main(){

    float radius = 0;
    printf("Give me a radius:\n");
    scanf("%f", &radius);

    float area = calc_area(radius);
    printf("The area of the circle with radius %5.2f is %5.2f.\n", radius, area);

    int largest = COMP(COMP(10, 12), COMP(11, 100));
    printf("Largest: %d\n", largest);

    printf("The name of the file where this code is written in is %s.\n", __FILE__); // this is an example of using a built-in macro

    return 0;
}