#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    string number = "";
    cin >> t;
    while (t != 0)
    {
        cin >> number;
        string result = (number[0] - '0' + number[1] - '0' + number[2] - '0') == number[3] - '0' + number[4] - '0' + number[5] - '0' ? "YES" : "NO";
        cout << result << endl;
        t--;
    }

    return 0;
}
