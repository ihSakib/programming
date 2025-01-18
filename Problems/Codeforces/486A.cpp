#include <iostream>
using namespace std;
int main()
{
    long long n, result;
    cin >> n;
    result = n % 2 == 0 ? (n / 2) : (-1) * (n + 1) / 2;
    cout << result;
    return 0;
}