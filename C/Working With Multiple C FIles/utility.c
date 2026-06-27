#include <stdlib.h>

// it is customary to also include the header file for this library
#include "utils.h"

// a simple function to turn an integer to its string equivalent
char* stringify(int num){
    int* temp = (int*) malloc(sizeof(int));
    temp[0] = 0;
    int divisor = 1;
    while(num / divisor > 0){
        temp[0]++;
        temp = (int*) realloc(temp, (temp[0] + 1) * sizeof(int));
        temp[temp[0]] = (num / divisor) % 10;
        divisor *= 10;
    }
    char* out = (char*) malloc(sizeof(char));
    int count = 0;
    for(int i = temp[0]; i >= 1; i--){
        out[count++] = temp[i] + '0';
        out = (char*) realloc(out, sizeof(char) * (count + 1));
    }
    out[count] = '\0';
    return out;
}