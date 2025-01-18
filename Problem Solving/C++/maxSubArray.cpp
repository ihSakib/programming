#include <iostream>
using namespace std;

void findLogestSubArray(int arr[], int size, int sum)
{

    int max = 0;
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        int current = 0;

        for (int j = i; j < size; j++)
        {
            current += arr[j];
            if (current == sum)
            {
                flag = true;
                if (j - i + 1 > max)
                {
                    max = j - i + 1;
                }
            }
        }
    }

    cout << max;
}

int main(int argc, char const *argv[])
{
    int arr[] = {-5, 8, -14, 2, 4, 12}, k = -5;
    int size = sizeof(arr) / sizeof(arr[0]);

    findLogestSubArray(arr, size, k);
    return 0;
}
