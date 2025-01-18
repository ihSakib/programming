#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        if (i != n && i % 5 == 0)
            cout << endl;

        cout << i << "\t";
    }

    return 0;
}
