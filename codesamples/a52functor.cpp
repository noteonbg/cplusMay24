#include <iostream>
using namespace std;

// Functor class
class Greet {
public:
    void operator()() {
        cout << "Hello World!" << endl;
    }
};

int main() {
    Greet greet; // Create an instance of Greet
    greet();     // Call the object as a function
    return 0;
}
