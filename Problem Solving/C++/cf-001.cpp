#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // Declare strings
    string arr1;
    string arr2;
    string arr3;

    // Assign values to strings
    arr1 = string(n, '#');
    arr2 = string(n - 1, '.') + '#';
    arr3 = '#' + string(n - 1, '.');

    int flip = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 != 0) // odd row
        {
            cout << arr1 << endl;
        }
        else // even
        {
            if (flip == 0)
            {
                cout << arr2 << endl;
                flip = 1;
            }
            else
            {
                cout << arr3 << endl;
                flip = 0;
            }
        }
    }
    return 0;
}
