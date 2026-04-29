package Java.Scopes.pkg1;

class A {

    private class Inner{

        public void innerFunc(){
            System.out.println("A function inside the inner class");
        }

    }
    
    static void a(){
        System.out.println("A function in class A");
    }

}
