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

    */

    return 0;
}