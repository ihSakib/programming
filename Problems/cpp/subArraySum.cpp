#include <iostream>
using namespace std;

void subArrayFind(int arr[], int size, int targetSum)
{
    for (int i = 0; i < size; i++)
    {

        int current = 0;
        for (int j = i; j < size; j++)
        {
            if (arr[i] == targetSum)
            {
                cout << "found at " << i << endl;
                return;
            }

            current += arr[j];
            if (current == targetSum)
            {
                cout << "Found between " << i << " and " << j << "\n";
                return;
            }
            else if (current > targetSum)
            {
                break;
            }
        }
    }
    cout << "Subarray with sum " << targetSum << " not found.\n";
}



int main()
{
    int arr[] = {1, 3, 2, 3, 7, 10, 1};
    subArrayFind(arr, sizeof(arr) / sizeof(arr[0]), 3);
    return 0;
}
