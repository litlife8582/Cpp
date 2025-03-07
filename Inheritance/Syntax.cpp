#include<iostream>
using namespace std;

class Base {
    public:
        void display() {
            std::cout << "This is the base class" << std::endl;
        }
    };
    
    class Derived : public Base { // Derived class inherits Base
    public:
        void show() {
            std::cout << "This is the derived class" << std::endl;
        }
    };
    
    int main() {
        Derived obj;
        obj.display(); // Inherited from Base class
        obj.show();    // Defined in Derived class
        return 0;
    }
    