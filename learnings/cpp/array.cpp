#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;

    // dynamically allocate memory for an array of integers
    int *students = new int[n];

    // initialize the array with values from 0 to n-1
    for (size_t i = 0; i < n; i++)
    {
        *(students + i) = i;
    }

    // display the array
    for (size_t i = 0; i < n; i++)
    {
        cout << *(students + i) << " ";
    }
    return 0;
}