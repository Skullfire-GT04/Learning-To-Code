#include <stdio.h>
#include <stdlib.h>


int main(){

    // an array is simply a way of storing a particular type of data in memory
    // in a contiguous manner, you can think of arrays as a set or collection of variables

    // Like an array of integers
    int integers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // the format for all types of arrays in C is like so

    /*
    Here are the various ways to declare arrays in C
    
    (i) data-type array_name[size];
    (ii) data-type array_name[size] = {elements....};
    (iii) data-type array_name = {elements....};
    
    The difference between the first method and the other two is the, in the first method we are not initializing the array
    with any elements, whereas we are doing so in the other two.

    The difference between the second and thrid method is that, you can intialize any number of elements in the second one as long as 
    they are less than or equal to the size passed into the 'size' argument during array declaration. Whereas in the third method, the 
    number of elements you intialize becomes the total size of the array.

    In C array names are just pointers (see notes), they point to the first element of the array

    */

    // Here is how you access elements in arrays
    for(int i = 0; i < 10; i++){
        printf("integers[%d]: %d\n", i, integers[i]);
    }

    // you can use the elements of an array as regular variables
    int a = (integers[7] - integers[2]) * integers[3];
    printf("a: %d\n", a);

    // you can check that the name of an array is just a pointer like so
    printf("integers: %d, &integers[0]: %d\n", integers, &integers[0]);

    // here is how you can make an array in the heap (see notes)
    int* pInts = (int *) malloc(sizeof(int) * 10);

    // you can use it like so
    pInts[0] = 10;

    // here pInts is a pointer to the 0th element of the array
    // you can access elements using a dereference syntax too
    *pInts; pInts[0]; // are both the same

    // or something like this
    *(pInts + 2); pInts[2]; // both are the same

    *(pInts + 4) = 12;

    // you can check it like so
    printf("pInts[4]: %d, *(pInts + 4): %d\n", pInts[4], *(pInts + 4));

    // when you use calloc instead of malloc, it initalizes all the elements to zero
    float* pFloats = (float*) calloc(sizeof(float), 10);

    // here let's check
    printf("Initialization using calloc:\n");
    for(int i = 0; i < 10; i++){
        printf("pFloats[%d]: %f\n", i, pFloats[i]);
    }

    free(pInts);
    free(pFloats);

    return 0;
}