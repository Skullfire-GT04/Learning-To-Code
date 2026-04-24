#include <stdio.h>

// see usage below
void foo(){
    printf("foo\n");
}

// see usage below
int add(int a, int b){
    return a + b;
}

// see usage below
void printAdd(int (*f) (int, int), char* prompt, int a, int b){
    printf("%s : %d\n", prompt, (*f)(a, b));
}


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

    printf("a: %d, p: %p, &a: %p, *p: %d\n", a, p, &a, *p);

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
    // where the data-type is the data-type to which the pointer is pointing to and 'i' is the factor by which you are incrementing/decrementing the pointer

    // But pointers can point to complex data types as well, like structs.

    struct Person{
        char* name; // you can use pointers inside a struct as attributes
        int age;
    } person1, person2, *personPtr;

    // in the above code person1 and person2 are normal variables of type struct Person, whereas *personPtr 
    // is a pointer to a data-type of struct Person

    person1.name = "John Doe";
    person1.age = 22;

    // you can use the personPtr to point to person1 like so

    personPtr = &person1;

    // now to access the attributes stored inside person1 through personPtr, you do something like this

    personPtr->name; // this is called the arrow notation
    // or something like this
    (*personPtr).name; // here you de-reference the pointer first, then access the 'name' property

    // here you can check it like so

    printf("person1.name: %s, personPtr->name: %s\n", person1.name, personPtr->name);

    // you can use the pointer to set properties like so
    personPtr->age = 22;


    // Now onto one of the most powerful form of pointers

    // Function pointers

    /*
        A function in memory is stored in the text-section (see notes), but what exactly does it mean to store a function?
        All a function is, is a set of instructions for the CPU in binary. And it is stored at a particular address like any other
        variable, hence you can make pointers point at functions.


        But you cannot do something like, 

        void fun(){}

        void* funPtr = &fun;  

        this doesn't work, like you expect it to.

        There are two problems with this approach:
        (i) You don't need to add the '&' symbol in front of the function name. Technically the function name itself
            is a pointer
        (ii) The type of pointer cannot be something random, it needs to match the function signature (see notes).

        The second problem is something I shall address,

        the format for defining a function signature as a data-type is as follows:

        return-type (*ptrName) (arguments);
    */

    // so if you want a pointer to the function foo defined above, the syntax would look something like so
    
    void (*fooPtr) () = foo;

    // now you can use fooPtr like the function foo 
    (*fooPtr)(); // you first de-reference the pointer, then call it

    // similarly for the add function

    int (*addPtr)(int, int) = add;
    printf("2 + 2 : %d\n", (*addPtr)(2, 2));

    // you can even pass function pointers as arguments to other functions like so
    // Like so
    printAdd(add, "3 + 3", 3, 3);

    // if you try to pass the addPtr to printAdd, it will work, because it will be pointer to add, and add itself is a pointer too
    printAdd(addPtr, "4 + 4", 4, 4);

    // you can have function pointers as attributes in structs too, like so

    struct Sales{
        int start_year;
        int end_year;
        float sales_per_month[100];
        float (*profit)(float* , size_t); // this is a function pointer named 'profit'
    };

    return 0;
}