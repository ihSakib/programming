#include <iostream>
#include <cmath> // For abs()
using namespace std;

class Point3D
{
private:
  double x, y, z;

public:
  // Constructor
  Point3D(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}

  // Overload binary + operator (adds two points)
  Point3D operator+(const Point3D &other) const
  {
    return Point3D(x + other.x, y + other.y, z + other.z);
  }

  // Overload unary + operator (converts negatives to positives)
  Point3D operator+() const
  {
    return Point3D(abs(x), abs(y), abs(z));
  }

  // Display function
  void display() const
  {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
  }
};

int main()
{
  Point3D p1(-3, 4, -5), p2(7, -2, 6);

  cout << "Original Points:\n";
  cout << "p1: ";
  p1.display();
  cout << "p2: ";
  p2.display();

  // Using binary + operator
  Point3D sum = p1.operator+(p2);
  cout << "\nSum of p1 and p2 (Binary +): ";
  sum.display();

  // Using unary + operator
  Point3D abs_p1 = p1.operator+();
  cout << "\nAbsolute value of p1 (Unary +): ";
  abs_p1.display();

  return 0;
}
