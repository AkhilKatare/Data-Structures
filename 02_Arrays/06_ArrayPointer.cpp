#include <iostream>

int main() 
{
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    /*
    Here, both the arr and ptr are pointer, which points to the first element of the array. 
    So, we can use either arr or ptr to access the elements of the array. 
    For example, arr[0] and ptr[0] will both give us the value 10.
    */

    std::cout << "Address of first element of array: " << arr << std::endl;
    std::cout << "Address of first element of array using pointer: " << ptr << std::endl;
    return 9;
}