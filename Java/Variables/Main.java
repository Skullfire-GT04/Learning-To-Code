// this is how you write a comment in java lol

public class Main{

    public static void main(String[] args){
        System.out.println("Hello world!"); // a simple hello world (don't worry about it right now pls)

        // java has two type of variables, or rather two types of data
        // Primitive data types and advanced data types
        // they both store the same type of data, the advanced data types
        // just have some more in-built functionality to them

        // Like for integers

        // these both are essentially the same, but 
        // the Integer data type is a class and has some more methods built into it

        int a = 10; // primitive data type
        Integer b = 12; // advanced data type

        System.out.println("a: " + a + " b: " + b);

        // Well that doesn't mean you should use always use Advanced data types instead of normal ones
        // everything has a place

        // The string data type doesn't exist in a primitive form, it is only present in an advanced data type
        String msg = "Something about it";

        System.out.println(msg);

        // here are the rest of the primitive data types
        float pi = 3.14f; // you need to use the 'f' at the end or the compiler will treat it like a double
        double something = 12.24556; 

        System.out.println("pi: " + pi + " something: " + something);

        long big_number = 24566256252l; // you need to use the 'l' at the end or the compiler will treat it like an integer

        System.out.println("big_number: " + big_number);

        char cat = 'a';

        boolean is_true = false;

        System.out.println("cat: " + cat);
        System.out.println("Is true: " + is_true);

        // well that is all about primitive data types

        // Advanced data types and their uses
        /*
        Before we begin I have to say something, the only difference when using advanced data types
        from normal data types is that:
        (i) They use more memory (because they are objects internally speaking)
        (ii) They use long words, like int becomes Integer, char becomes Character

        There are many uses for advanced data types, but the most useful of all is the fact
        that they can be used for casting, like casting a string into a float (yes you can do it)
        */

        // you can do so like so
        String some_num = "14.3141";
        float some_num_in_float = Float.parseFloat(some_num);

        // you do the reverse like so
        String fdsg = String.valueOf(12.41252);

        System.out.println("Casted float: " + some_num_in_float);
        System.out.println("Casted string: " + fdsg);

        // Strings in particular are very useful, and the String data type has a lot of methods for it

        // the split function
        String sentence = "This is a sentence.";
        String[] words = sentence.split(" "); // this functions splits a string by a delimiter you pass into the function as argument
        for(String word : words) System.out.println(word);

        // the charAt function
        char dog = sentence.charAt(10); // retrieves the value at index 10 of the string 

        // the equality checker and the join function
        boolean same = sentence.equals(String.join(" ", words)); // the join function does the opposite of the split function
                                                                           // and joins an array separated by a delimiter

        if(same) System.out.println("The code worked!");

        // converting to lower case or uppercase
        String upperSentence = sentence.toUpperCase();
        String lowerSentence = sentence.toLowerCase();

        System.out.println("Upper Cased sentence: " + upperSentence);
        System.out.println("Lower Cased Sentence: " + lowerSentence);

        boolean still_same = upperSentence.equalsIgnoreCase(lowerSentence); // checks if the two strings are equal regardless of the capitalization

        System.err.println("Lower Sentence == Upper Sentence (without case checking): " + still_same);

        Character cha = 'a'; // out of all the advanced or reference data types, this one is the most superfluous one in my opinion       
        // because you don't really use it for much, at least in my experience
        
    }
}