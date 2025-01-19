#include <bits/stdc++.h>
using namespace std;

class Rect
{
private:
    double l, w;

public:
    Rect(double l = 0, double w = 0) : l(l), w(w) {}

    friend istream &operator>>(istream &in, Rect &operand)
    {
        in >> operand.l >> operand.w;

        return in;
    }

    friend ostream &operator<<(ostream &out, Rect &operand)
    {
        cout << operand.l << " " << operand.w;
        return out;
    }

    Rect operator+(Rect &operand)
    {
        return Rect(l + operand.l, w + operand.w);
    }
};

int main()
{
    Rect r1, r2, r3;

    cout << "Give first rectangle length and width: ";
    cin >> r1;

    cout << "Give second rectangle length and width: ";
    cin >> r2;

    cout << "Summing..." << endl;
    r3 = r1 + r2;
    // r3 = r1.operator+(r2);  // This also works

    cout << "Sum of the rectangles: ";
    cout << r3;

    return 0;
}