import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Set;

class Main{

    public static void main(String[] args) {
        
        // What is a hash-map? (see notes for more information)

        /*
            Well a hash-map is something that stores key-value pairs, but what does
            that actually mean? I mean it sounds kind of nice, but it would be nicer if you knew what it meant.

            You know how your phone has a lot of numbers, each number is used to call a different person, 
            you can say that each number is associated with a different person, or even the same person, if the two or more numbers
            belong to the same person. The point being that your phone associated each number (key) with a different person (value).

            It is the same thing in programming, you define a key, which can be anything, like a string, an integer, a floating point number, 
            an object, or anything else, and associate that key with any value.
            
        */

        // here is how you instantiate a hashmap
        // HashMap<key data type, value data type> hash_map_name = new HashMap<>();

        // Like

        // btw the key and value data types can only be reference data types (see notes)
        HashMap<Integer, String> map1 = new HashMap<>();

        // here is how you add a key value pair
        map1.put(1, "Hello");
        //       ^   ^^^^^
        //     key  : value

        // here is how you can put a key only if the key doesn't exist 
        map1.putIfAbsent(1, "World"); // this will not overwrite the previous value of key 1

        // here is how you can retrieve a value associated with a key
        String val1 = map1.get(1);

        // here is how you can update a value associated with a key
        map1.replace(1, "World"); // this will replace the value of "Hello" with the value "world";

        // you can check like so
        String val2 = map1.get(1);
        System.out.println("Val1 : " + val1 + " Val2 : " + val2);

        // let's put in some more values
        map1.put(243, "Something");
        map1.put(1335, "Lol");
        map1.put(653, "Temp");

        // here is how you can get all the keys stores in a hashmap
        Set<Integer> keys = map1.keySet();

        // you can check like so
        System.out.println("Stored keys:");
        int count = 1;
        for(Integer key : keys){
            System.out.println(count + ". " + key);
            count++;
        }

        // you can retrieve all the values stores in a hashmap like so

        System.out.println("Stored values:");
        count = 1;
        for(String val : map1.values()){
            System.err.println(count + ". " + val);
            count++;
        }

        // here is how you can remove key value pairs
        String removed_value = map1.remove(1335);
        System.out.println("Removed value : " + removed_value);
    }

}