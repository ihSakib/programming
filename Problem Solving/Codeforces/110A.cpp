#include <iostream>
#include <string>
#include <cstdint>
using namespace std;

int main()
{
    uint64_t num;
    int count = 0;
    cin >> num;
    string strNumber = to_string(num);
    for (int i = 0; i < strNumber.length(); i++)
    {
        if (strNumber[i] != '4' && strNumber[i] != '7')
        {
            continue;
        }
        count++;
    }

    if (count == 4 || count == 7)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}