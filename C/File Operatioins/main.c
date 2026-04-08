#include <stdio.h>


/*

Terminology:

(i) file stream : consider this well like a river, if you get me. But in seriousness
                  all a stream represents if something you write into, or read from
                  it can stdin for reading, stdout for writing, or a FILE pointer

(ii) EOF (end of file) : kind of self explanatory, but it just means the ending of a file

(iii) Current Working Directory or CWD : it is the directory where your program currently looks for files for reading, or writing

*/



int main(){

    // fopen is the function which returns a pointer to
    // a file, it takes two arguments, the name of the file
    // and the mode you want to open it in

    // There are four modes you can open a file in
    // (i) reading ("r")
    // (ii) writing ("w")
    // (iii) writing in binary ("wb")
    // (iv) reading in binary ("rb")

    FILE* f = fopen("dummy.txt", "w");

    // now if you have opened the file in writing mode
    // you can write single characters as follows
    
    fputc('H', f);
    fputc('e', f);
    fputc('l', f);
    fputc('l', f);
    fputc('o', f);
    fputc('\n', f);

    // or you can write a string as follows
    fprintf(f, "world!\n");

    const char* msg = "Something weird about this.\n";

    // or you can write a string into the file like so

    fwrite(msg, sizeof(msg), sizeof(msg), f);

    // after doing whatever it is you wanted to do with the file
    // you have to close the file as follows

    fclose(f);

    f = fopen("dummy.txt", "r");

    // now if you want to read a file
    // then here is how you do it

    // if you want to read single characters
    // you do it like so

    char temp = fgetc(f);

    putc(temp, stdout); // here stdout refers to the console

    // each successive call to fgetc will fetch the next character from
    // the file stream

    //now if you want to read a string, you do it like so ma boi

    char buf[256];
    fgets(buf, sizeof(buf), f);

    printf("%s", buf);

    // but you see this has a problem, it stop reading when it hits a \n character
    // so the better solution would be

    fread(buf, sizeof(buf), 10, f);

    // fread reads until EOF or the number of objects read exceeds the number of objects to be read
    // provided as the 3rd argument

    printf("%s\n", buf);

    fclose(f);

    // you can also rename a file like so

    int renamed = rename("dummy.txt", "dum.txt");

    if(renamed){
        perror("Failed to rename file !");
    }else{
        printf("Renamed file to dum.txt\n");
    }

    // you can also remove files from the current working directory, like so

    int removed = remove("dum.txt");

    if(removed){
        perror("Failed to remove file!");
    }else{
        printf("Successfully removed file.\n");
    }
        return 0;
}