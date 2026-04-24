package Java.OOP.Inheritance;


class Wolf extends Animal{

    Wolf(String name, int age){
        super(name, "Cannis lupus", age);
    }

    void hunt(){
        System.out.println("The wolf is hunting.");
    }

    // this is how you do method overriding in Java
    @Override
    void askName(){
        System.out.println("The name of the wolf is " + this.name);
    }
    
    @Override
    void askAge(){
        System.out.println("The age of the wolf is " + this.age);
    }

    @Override
    void askSpecies(){
        System.out.println("The species of the wolf is " + this.species);
    }
    
}
