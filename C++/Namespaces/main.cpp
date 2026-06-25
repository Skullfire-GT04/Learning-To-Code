#include <iostream>


// this is how you define a namespace
namespace A{

    float pi = 3.14f;

    void print(const char* s){
        std::cout << s << std::endl;
    }

}

// here is another example of a namespace
namespace B{

    double pi = 3.1465314;

    // you can also nest namespaces like this
    namespace C{

        void print(const char* s){
            using std::cout; // this is how you can import specific values from namespaces
            cout << "Printing text...." << std::endl;
            cout << s << std::endl;
        }
    }
}


int main(){

    // here is how you can import all values form a namespace and use them as if
    // they were local or global values

    using namespace A;
    print("Hello, there!");

    std::cout << "Value of pi from A: " << pi << std::endl;

    // here is how you can alias namespaces
    namespace D = B::C;

    D::print("Hello, there!");

    std::cout << "Value of pi from B: " << B::pi << std::endl;

    return 0;
}