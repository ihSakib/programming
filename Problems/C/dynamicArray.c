#include <stdio.h>
#include <stdlib.h>

struct
{
    int *arr;
    int capacity;
    int index;
} dynamicArray;

void append(int n)
{
    // Check if array is full
    if (dynamicArray.index == dynamicArray.capacity)
    {
        // If full, reallocate memory to double the capacity
        dynamicArray.capacity *= 2;
        dynamicArray.arr = realloc(dynamicArray.arr, dynamicArray.capacity * sizeof(int));
    }
    // Add the new element at the end
    dynamicArray.arr[dynamicArray.index] = n;
    dynamicArray.index++;
}

int main()
{
    // Initial capacity of the dynamic array
    dynamicArray.capacity = 5;
    // Allocate memory for the array
    dynamicArray.arr = malloc(dynamicArray.capacity * sizeof(int));
    // Initial index of the array
    dynamicArray.index = 0;

    printf("Enter integers (press Enter to finish):\n");

    int num;
    // Take input until line break
    while (scanf("%d", &num) == 1)
    {
        // Append the input number to the dynamic array
        append(num);
    }

    printf("Elements entered:\n");
    // Print the elements entered
    for (int i = 0; i < dynamicArray.index; i++)
    {
        printf("%d ", dynamicArray.arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(dynamicArray.arr);

    return 0;
}
