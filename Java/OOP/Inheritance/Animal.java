package Java.OOP.Inheritance;

// this represents the parent class for the dog child class

class Animal {
    
    String name, species;
    int age;

    Animal(String name, String species, int age){
        this.name = name;
        this.species = species;
        this.age = age;
    }

    void askName(){
        System.out.println("The name of the animal is " + this.name);
    }

    void askAge(){
        System.out.println("The age of the animal is " + this.age);
    }

    void askSpecies(){
        System.out.println("The species of the animal is" + this.species);
    }

}
