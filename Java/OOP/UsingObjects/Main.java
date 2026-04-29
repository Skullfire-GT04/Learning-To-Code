package Java.OOP.UsingObjects;

public class Main {

    public static void main(String[] args){

        System.out.println("Let's initialize some objects.");

        // the format for creating objects in Java is like so
        // ClassName objectName = new ClassName(arguments);

        Account acc1 = new Account("Hugh Jackson", 200.00f);

        // to use a method associated with an object we use the dot notation like so
        acc1.deposit(1000);
        acc1.withdraw(20);
        acc1.changeBearer("Micheal Jackson");
        System.out.println(acc1.toString());

    }
}
