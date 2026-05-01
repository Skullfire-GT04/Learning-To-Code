package Java.Scopes.pkg1;


public class B {

    public void b(){

        System.out.println("A function inside class B");

        // can access static method directly from the default scope modified
        // class in the same package
        A.a();
    }
    
}
