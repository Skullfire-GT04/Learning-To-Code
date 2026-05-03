package Java.ArrayDemo;

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

    }
}