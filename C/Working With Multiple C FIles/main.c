#include <stdio.h>

// including the custom library
#include "utils.h"


int main(){
    int temp = 1234;
    printf("String version of %d : %s\n", temp, stringify(temp));
    return 0;
}