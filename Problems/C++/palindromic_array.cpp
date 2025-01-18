#include <iostream>
using namespace std;

// using two pointer algorithm
bool isPalindrome(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (arr[left] != arr[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Input elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (isPalindrome(arr, n))
        cout << "palindrome!";
    else
        cout << "not palindrome";

    return 0;
}
