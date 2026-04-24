package Java.OOP.Inheritance;

public class Main {

    public static void main(String[] args) {
        Dog myDog = new Dog("Benny", 10);
        myDog.askName();
        myDog.askAge();
        myDog.askSpecies();

        Wolf myWolf = new Wolf("Dyson", 5);
        myWolf.askName();
        myWolf.askAge();
        myWolf.askSpecies();
    }
}
