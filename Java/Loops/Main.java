package Java.Loops;

public class Main {

    static void printArr(int[] arr){
        System.out.print("{");
        for(int i = 0; i < arr.length; i++){
            System.out.print(i != arr.length - 1 ? i + ", " : i + "}");
        }
        System.out.println();
    }

    public static void main(String[] args){

        System.out.println("Let's learn about loops in java.");

        // They kind of loop similar to loops in C++

        // Like a for loop
        /*
        The general format for a for loop is like so

        for(initialization section; loop-condition; change-condition){
            body-of-loop
        }

        */
        System.out.println("Here is a simple for-loop:");
        for(int i = 0; i < 10; i++){
            System.out.println("i: " + i);
        }

        // Let's look at a for each loop
        /*
        The general format for a for-each loop is like so

        for(data-type identifier-name : dataset){
            body-of-loop
        }

        */

        // so something like this

        System.out.println("Let's look at a for-each loop for the following array:");
        int[] a = {1, 2, 3, 4, 5, 6, 7};
        printArr(a);
        for(int i : a){
            System.out.println("i: " + i);
        }

        // Let's look at while loops 
        /*
        The general format for a while loop is like so

        while(test-condition){
            body-of-loop
        }
    
        */

        System.out.println("Let's take a loop at a traditional while loop:");
        int b = 100;
        while(b > 0){
            System.out.println("b: " + b);
            b -= 10; // if you don't add a statement to change the test-condition then it will result in an infinite loop
        }

        // Let's take a look at the do-while loop
        /*
          As I have mentioned many times before, the do-while loop is a tool used when 
          you want the loop to run at least once before the loop-condition is evaluated.

        The general format for a do-while loop is like so:

        do{
            body-of-loop
        }while(test-condition);

        */

        String sentence = "Something weird about this.";
        System.out.println("Sentence: " + sentence);
        int index = 0;
        do{
            System.out.println("Char at index(" + index + "): " + sentence.charAt(index));
            index++;
        }while(index < sentence.length());

    }
}
