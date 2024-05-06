#include <iostream>
#include <new>  // Include the new header for std::bad_alloc

int main() {
    try {
        // Allocate memory for an array of 100 integers
        int* myArray = new int[100];

        // Use the allocated memory (e.g., initialize values)
        for (int i = 0; i < 100; ++i) {
            myArray[i] = i * 10;
        }

        // Deallocate the memory
        delete[] myArray;
    } catch (const std::bad_alloc& e) {
        // Handle the exception
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    }

    return 0;
}
