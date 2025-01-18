#include <iostream>
using namespace std;

class Vector
{
private:
    double num1, num2;

public:
    Vector(double x, double y) : num1(x), num2(y) {}

    // Overload the + operator to add two Vector objects
    Vector operator+(const Vector &other) const
    {
        return Vector(x + other.x, y + other.y);
    }

    // Overload the << operator for easy output
    friend ostream &operator<<(ostream &os, const Vector &v)
    {
        os << "(" << v.x << ", " << v.y << ")";
        return os;
    }
};

int main()
{
    Vector v1(1.0, 2.0);
    Vector v2(3.0, 4.0);
    Vector v3 = v1 + v2; // Uses the overloaded + operator

    cout << "v1: " << v1 << endl; // Uses the overloaded << operator
    cout << "v2: " << v2 << endl;
    cout << "v3: " << v3 << endl;

    return 0;
}
