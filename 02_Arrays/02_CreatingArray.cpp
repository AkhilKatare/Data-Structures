#include <iostream>

void traverse(int[], int);

int main() 
{
    // Create an array of integers with 5 elements
    int myArray[5];

    // Initialize the array with values
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;

    // We can also create array and initialize it at the same time
    int anotherArray[5] = {10, 20, 30, 40, 50};

    // We can also create arrays dynamically using pointers and the new keyword.
    // Dynamic means that array can be created at runtime, and its size can be determined during execution.
    // The dynamic array is created on the heap, and we need to manage its memory manually.
    int* dynamicArray = new int[5];
    dynamicArray[0] = 10;
    dynamicArray[1] = 20;
    dynamicArray[2] = 30;
    dynamicArray[3] = 40;
    dynamicArray[4] = 50;

    traverse(myArray, 5);
    traverse(anotherArray, 5);
    traverse(dynamicArray, 5);

    delete[] dynamicArray; // Free the memory allocated for the dynamic array
    return 0;
}

// Traversing over the array and printing its elements.
void traverse(int arr[], int size) 
{
    std::cout << "Elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}