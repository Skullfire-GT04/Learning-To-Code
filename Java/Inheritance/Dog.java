package Java.Inheritance;

// you inherit a class using the 'extends' keyword in the class declaration statement, followed by all the classes you want to inherit 
// (yes java permits multiple inheritance)

class Dog extends Wolf{

    Dog(String name, int age){
        super(name, age);
        this.species = "Cannis lupus familiaris";
    }

    @Override
    void askName(){
        System.out.println("The name of the dog is " + this.name);
    }
    
    @Override
    void askAge(){
        System.out.println("The age of the dog is " + this.age);
    }

    @Override
    void askSpecies(){
        System.out.println("The species of the dog is " + this.species);
    }
    
}
