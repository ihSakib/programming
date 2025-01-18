#include <stdio.h>

int main()
{
    const int arr[] = {1, 2, 3}; // `arr` is a constant array

    arr[0] = 10; // Attempting to modify an element in the array

    return 0;
}
