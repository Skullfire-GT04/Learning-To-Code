#include <stdio.h>


    // pointers are variables which store addresses (that's it)

    /*
    
    If you don't know what addresses are, then why are you here in the first place, please go read the notes.
    All addresses are essentially integers, but that doesn't mean you should use them as integers.

    In C the address of a variable or anything in general is associated with a data type.
    Like an int variable has an address of data type int* , here '*' should be read as 'pointer'.

    Now a pointer itself is a variable and has an address too, so what about its address data type?

    There is a formula for finding out the data type of the address of any type of variable, which is:
    data type of address = data type of variable + '*'

    so an int* variable's address data type would be int* + * = int** also called a double pointer.

    Although I should tell you, there is no textbook which describes a formula for doing so, this is something I came up
    on a whim because I thought double pointers, triple pointers and so on were kind of confusing.

    The reason for why you need to have double pointers and so on in the first place is because the compiler needs to know
    how many times you can de-reference a pointer.

    What does de-referencing means?

    Well since a pointer points to another variable's address, you can access the thing stored at that address by de-referencing
    the pointer.

    And since I said before that addresses are just integers at the end of the day, you cannot just do something like
    int address = 12345; and then use it as a pointer.

    The compiler doesn't allow that because it is not memory safe (see notes), and that's where the need for the double '*' and so on, comes in.
    If the data-type has a single '*' then you can de-reference it once, if it has two '*' then you can do it twice and so on.

    */

int main(){

    // Like

    int a = 12;
    int* p = &a; // here p points to the address of 'a'.

    printf("a: %d, p: %u, &a: %u, *p: %d\n", a, p, &a, *p);

    // the '&' operator returns the address of anything
    // so something like &a should be read as
    // 'the address of a'

    // Let's define a string using pointers

    const char* string = "Hello there!";

    // this variable points to the address of the first character in that string
    // i.e. 'H', here you can check

    printf("*string: %c\n", *string);

    // const pointers cannot be changed to point something else

    // let's define a float pointer

    float b = 3.141255f;
    float* bp = &b; // should be read as 'address of b'

    // but even if pointers are variables which store integers as addresses
    // you cannot do something like this

    int* s = 12344; // this is illegal
    // int* t = &123; this is also illegal

    // let's talk about pointer arithmetic

    p++; // increases the pointer by sizeof(int) instead of 1
    // because p is an int pointer

    // or something like this, it doesn't increment the pointer, just accesses the variable next to it
    *(p + 1); 

    // pointer arithmetic becomes important when concerning arrays, but that is not the topic for now (see notes)
    // just remember, whenever you increment/decrement a pointer, it gets incremented by the sizeof(data-type) * i
    // where the data-type is the data-type to which the pointer is pointing to

    return 0;
}