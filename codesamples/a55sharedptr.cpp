#include <iostream>
#include <memory> // Include the <memory> header for shared_ptr

struct MyClass {
    int value;

    MyClass(int val) : value(val) {
        std::cout << "Constructing MyClass with value: " << value << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructing MyClass with value: " << value << std::endl;
    }
};

int main() {
    // Create a shared_ptr to a dynamically allocated MyClass object
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>(42);

    // Create another shared_ptr pointing to the same object
    std::shared_ptr<MyClass> ptr2 = ptr1;

    // Access the object through shared_ptr
    std::cout << "Value via ptr1: " << ptr1->value << std::endl;
    std::cout << "Value via ptr2: " << ptr2->value << std::endl;

    // Reset ptr1 (decrease reference count)
    ptr1.reset();

    // Access the object via ptr2 (still valid)
    std::cout << "Value via ptr2 after reset: " << ptr2->value << std::endl;

    // Object is automatically deleted when ptr2 goes out of scope
    return 0;
}
