#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
The concept of a dynamic array is that it can 
change in size during runtime, to implement such a 
data structure in C we need to use dynamic memory
allocation using malloc or calloc, or even realloc 
during item deletion or insertion
*/

// this struct defines a vector data type
// a vector in programming languages is basically a data structure
// with a variable size during runtime
typedef struct {
    int* arr;
    size_t size;
    size_t num_elements;
} vec;

// this functions takes in a vec data type and initializes it with provided number of elements
void init_vec(vec* arr, size_t elem_size, int inital_val){
    arr->arr = (int*) malloc(sizeof(int) * elem_size);
    arr->size = elem_size * sizeof(int);
    arr->num_elements = elem_size;
    for(int i = 0; i < elem_size; i++){
        arr->arr[i] = inital_val;
    }
}

// this function takes in a pointer to a dynamic array and inserts an
// element at the end of the array
void append(vec* arr, int item){
    arr->arr = (int*) realloc(arr->arr, arr->size + sizeof(int));
    arr->size += sizeof(int);
    arr->num_elements++;
    arr->arr[arr->num_elements - 1] = item;
}

// this function resets a vector
void delete_vec(vec* arr){
    free(arr->arr);
    arr->size = 0;
    arr->num_elements = 0;
}

// this functions inserts an element anywhere in a vector
void insert(vec* arr, int index, int item){
    if(index < 0 || index >= arr->num_elements) return;
    arr->arr = (int*) realloc(arr->arr, arr->num_elements + sizeof(int));
    arr->size += sizeof(int);
    arr->num_elements++;
    for(int i = arr->num_elements - 1; i >= index; i--){
        if(i > 0) arr->arr[i] = arr->arr[i - 1];
        if(i == index){
            arr->arr[i] = item;
        }
    }
}

// this function deletes an item from the vector
void pop(vec* arr, int index){
    if(index < 0 || index >= arr->num_elements) return;
    int temp = arr->arr[arr->num_elements - 1];
    arr->arr = (int*) realloc(arr->arr, arr->size - sizeof(int));
    arr->size -= sizeof(int);
    arr->num_elements--;
    // if the user wants to delete the last element
    if(arr->num_elements == index) return;
    for(int i = arr->num_elements - 1; i >= index; i--){
        int copy = arr->arr[i];
        arr->arr[i] = temp;
        temp = copy;
    }
}


int main(){    

    vec temp;
    init_vec(&temp, 1, 0);

    printf("Initial vector:\n");
    for(int i = 0; i < temp.num_elements; i++){
        printf("vec[%d] : %d\n", i, temp.arr[i]);
    }

    int item;
    while(true){
        printf("Enter integers to add to the vector (-1 = Exit):");
        scanf("%d", &item);
        getchar();
        if(item == -1) break;
        append(&temp, item);
    }
    insert(&temp, 1, 12425);
    pop(&temp, 3);

    printf("Vector after appending:\n");
    for(int i = 0; i < temp.num_elements; i++){
        printf("vec[%d]: %d\n", i, temp.arr[i]);
    }


    delete_vec(&temp);

    return 0;
}