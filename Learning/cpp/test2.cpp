#include <bits/stdc++.h>
using namespace std;

class Rect
{
private:
    double l, w;

public:
    static const int n=100;
    friend istream &operator>>(istream &in, Rect &operand)
    {
        cout << "Input >> " << endl;
        cout << "Length: ";
        in >> operand.l;
        cout << "Width: ";
        in >> operand.w;
        cout << endl;
        return in;
    }

    friend ostream &operator<<(ostream &out, Rect &operand)
    {
        cout << "Output << " << endl;
        cout << "Length: " << operand.l << endl
             << "Width: " << operand.w << endl;
        cout << endl;
        return out;
    }

    Rect operator+(Rect &operand)
    {
        Rect temp;
        temp.l = l + operand.l;
        temp.w = w + operand.w;

        return temp;
    }

};

int main()
{
    // Rect r1, r2, r3;
    // cin >> r1;
    // cout << r1;
    // cin >> r2;
    // cout << r2;

    // r3 = r1 + r2;
    // cout << r3;

    cout<<Rect::n;

    return 0;
}