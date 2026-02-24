#include <iostream>

void pass(int[]);

int main() 
{
    int arr[5] = {10, 20, 30, 40, 50};
    
    // We can pass the array to a function by passing the name of the array.
    pass(arr);

    return 0;
}

void pass(int arr[]) {
    std::cout << "Array passed by value";
}