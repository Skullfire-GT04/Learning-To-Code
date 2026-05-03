package Java.ArrayDemo;

import java.util.ArrayList;

public class Main{
    
    public static void main(String[] args){
        System.out.println("Let's work with arrays in Java");

        // the syntax of declaring array in Java is like so
        // DataType[] identifier = new DataType[size];

        // so something like this
        int[] intArr = new int[4];
        intArr[0] = 10;
        intArr[1] = 20;
        intArr[2] = 30;
        intArr[3] = 40;
        
        // you can access various in-built methods for arrays using the dot notation
        // the main one is the length attribute which stores the length of the array
        for(int i = 0; i < intArr.length; i++){
            System.out.println("intArr[" + i + "] : " + intArr[i]);
        }

        // aside from normal static arrays, java also has a built-in dynamic array
        // class called the ArrayList

        // the format for instantiating one is like so
        // ArrayList identifier = new ArrayList<DataType>();

        ArrayList grocery_list = new ArrayList<String>();

        // adding items to the array list
        grocery_list.add("Lettuce");
        grocery_list.add("Onions");
        grocery_list.add("Spinach");
        grocery_list.add("Cheese");

        // deleting items
        grocery_list.remove("Spinach")

        // accessing elements
        String food = grocery_list.get(0);

        // getting the length of the grocery list
        int size = grocery_list.size();

        
    }
}