#include <iostream>
#include <memory> // Include the <memory> header for unique_ptr

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
    // Create a unique_ptr to manage a dynamically allocated MyClass object
    std::unique_ptr<MyClass> ptrObj = std::make_unique<MyClass>(42);

    // Access the object through the unique_ptr
    std::cout << "Value via ptrObj: " << ptrObj->value << std::endl;

    // The object is automatically deleted when ptrObj goes out of scope
    return 0;
}
