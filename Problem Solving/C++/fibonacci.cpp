#include <iostream>
using namespace std;

void fib(int n)
{
    long long first = 0, second = 1;
    for (int i = 0; i < n; i++)
    {
        cout << first << " ";

        long long temp = first + second;
        first = second;

        second = temp;
    }
}

int main(int argc, char const *argv[])
{
    fib(50);
    return 0;
}
