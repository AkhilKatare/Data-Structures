#include <iostream>

void traverse(int[], int);

int main() 
{
    int arr[5] = {10, 20, 30, 40, 50};

    // We can access the elements of the array using their index.
    // like, arr[index] where index starts from 0 and ends at size-1.
    std::cout << "First element of the array: " << arr[0] << std::endl;
    std::cout << "Second element of the array: " << arr[1] << std::endl;

    return 0;
}