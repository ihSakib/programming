#include <iostream>
#include <iomanip>

using namespace std;

void printArray(int size)
{
    int arr[size][size];

    // Fill the array
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = min(i, min(j, min(size - 1 - i, size - 1 - j))) + 1;
            }
        }
    } 
/*

    1   1   1   1   1
    1   2   2   2   1
    1   2   3   2   1
    1   2   2   2   1
    1   1   1   1   1 

*/

    // Print the array
    // for (int i = 0; i < size; ++i)
    // {
    //     for (int j = 0; j < size; ++j)
    //     {
    //         cout << setw(3) << arr[i][j];
    //         if (j < size - 1)
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
}

int main()
{

    printArray(5);
    cout << endl;

    return 0;
}
