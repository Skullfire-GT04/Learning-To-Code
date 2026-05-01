package Java.Scopes.pkg1;

class A {


    // can declare private nested static classes
    private static class Inner{

        // can make private class's function as public
        // ultimately the class's own scope modifier will take precedence
        public void innerFunc(){
            System.out.println("A function inside the inner class");
        }

    }
    
    static void a(){
        // can access static nested class inside a static method
        Inner in = new Inner();
        in.innerFunc();
        System.out.println("A function in class A");
    }

}
