#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 The single more important thing I can think of which is more
 important than knowing about declaring and manupulating variables
 is undoubtedly knowing how to make conditional decisions in code
*/

int main(){

    int age;
    char name[20];

    printf("Welcome my boy, to the night club.\nBut before we begin I have to ask you some questions k?\n");
    printf("How old are you?: ");
    scanf("%2d", &age);

    // this is how to use the if, else if, and else clauses in C
    
    if(age < 18){
        printf("Sorry buddy, you are underage. Come back later k? Bye now!\n");
        return EXIT_FAILURE;
    }
    else if(age == 18){
        printf("Just wait a year man, then you are good to go.\n");
        return EXIT_FAILURE;
    }
    else{
        printf("Welcome to the club man!\n");
    }

    // now to use a switch case

    /*
    the format is like so

    switch(expression){
        case 1: expression;
        case 2: expression;
        .
        .
        .
        .
        case n: expression;
        default:
            expresison;
    }
    */

    switch(age){
        case 50:
            printf("Damn bro, you pushing it now. Shouldn't you be with your kids or something?\n");
            break;
        case 100:
            printf("Ok so you just trollin, but I can see you are an oldie so whatevr bruv.\n");
            break;
        case 30:
            printf("Bro look, this is no my business, but we gotta stop going to clubs, we need to lock in broski.\n");
            break;
        default:
            printf("Don't do it bro, truse me. You know what I am talking about.\n");
            break;
    }

    printf("Now you have to register in our system to allow you in.\n");
    printf("What's your name? :");
    scanf("%20s", &name);
    putchar('\n');

    FILE* names = fopen("names.txt", "r");

    int registered = 0;

    // reading all the names in the names.txt file

    char buf[20];
    while(fgets(buf, sizeof(buf), names) != NULL){
        buf[strcspn(buf, "\n")] = '\0';
        if(!strcmp(buf, name)){
            registered = 1;
            break;
        }
    }
    
    fclose(names);
    
    /*
       now how to use the ternary operator
       the syntax goes like this
       conditional expression ? if true then this : if no then this one lol
       i.e. expresison : if true : if false
    */
    const char* msg = registered ? "Welcome you are already registered!\n" : "We didn't find you name in the list, but we will register you now.\n";
    printf("%s", msg);
    
    if(!registered){
        names = fopen("names.txt", "a");

        fprintf(names, "%s\n", name);
        
        fclose(names);

        printf("Done! You now now enter !\n");
    }
    
    return EXIT_SUCCESS;
}