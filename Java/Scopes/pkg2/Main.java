package Java.Scopes.pkg2;

import Java.Scopes.pkg1.B;

public class Main {
    public static void main(String[] args) {
//  ^^^^^^
//  what does this word even mean? (See below)

    /*
        Well, you see programs are not like people. That is they are not open for everyone,
    or other programs more specifically. And that is done because you want to protect some programs
    from being accessed by other programs. 

    That's where the concept of scoping (not like in COD) comes in, and btw scopes apply not only to 
    classes, but also to functions and variables.

    */
    
    // can access public classes defined in other packages
    B b = new B();
    b.b();

    // can access default scope modified classes within the same package
    C c = new C();
    c.c();
    
    }
}
