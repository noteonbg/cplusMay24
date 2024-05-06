#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Constructing base\n";
    }

    // Virtual destructor
    virtual ~Base() {
        std::cout << "Destructing base\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Constructing derived\n";
    }

    ~Derived() {
        std::cout << "Destructing derived\n";
    }
};

int main() {
    Derived* d = new Derived();
    Base* b = d;
    delete b; // Properly destructs both base and derived objects
    return 0;
}
