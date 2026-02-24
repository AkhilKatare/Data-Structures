#include <iostream>

void traverse(int[], int);

int main() 
{
    int arr[5] = {10, 20, 30, 40, 50};
    std::cout << "Before updating the array: ";
    traverse(arr, 5);

    // Updating elements of the array
    arr[0] = 15;
    arr[4] = 90;

    std::cout << "After updating the array: ";
    traverse(arr, 5);

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