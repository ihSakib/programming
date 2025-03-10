#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    else
    {
        int flag = x, reverseX = 0;
        while (x != 0)
        {
            int reminder = x % 10;
            reverseX = reverseX * 10 + reminder;
            x /= 10;
        }
        if (flag == reverseX)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    bool value = isPalindrome(n);
    if (value == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}