#include <iostream>


// here is how you define classes in c++
/*
class className{

    private:
    private members

    protected:
    protected members

    public:
    public members

};
*/


// Like
class Human{

    // be default all attributes of a class are private
    const char* name;
    static int num_of_humans; // you can make variables static with the static keyword

    // below this label all attributes become public
    public:

    // this is how you define constructors for classes
    Human(const char* name){
        this->name = name;
        num_of_humans++;
    }

    // this is how you define normal function members
    void talk(){
        std::cout << "Hello, my name is " << this->name << std::endl;
    }

    // this is how you define static function members
    static int getNumHumans(){
        return num_of_humans;
    }
};

// you must initialize all static members like so
int Human::num_of_humans = 0;

// this is how you can inherit classes
class Wizard : public Human{
//             ^^^^^^ this makes it so that all public members of Human remains public
//                    by default all members of the parent class become private
//                    that doesn't mean you can't access them, it just means other processes can't
//                    access them

    public:

    Wizard(const char* name) : Human(name) {
    //                         ^^^^^^^^^^^ This is how you call the constructor of the parent class 
    }

    void tellSecret(){
        std::cout << "I am actually a wizard." << std::endl;
    }
};


int main(){

    // this is how you instantiate objects of a class
    Human human1("Gilbert");
    Wizard wizard1("Harry Potter");

    // here is how you access members of an object
    human1.talk();
    wizard1.talk();
    wizard1.tellSecret();

    // here is how you access static public members
    std::cout << "Total Number of humans : " << Human::getNumHumans() << std::endl;

    return 0;
}