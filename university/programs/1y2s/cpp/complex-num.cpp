#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
  double real, img;

public:
  Complex(double x, double y) : real(x), img(y) {}
  // friend Complex add(const Complex &c1, const Complex &c2);

  // Overloaded operator +
  Complex operator+(const Complex other) const
  {
    return Complex(real + other.real, img + other.img);
  }

  void display()
  {
    string sign = img < 0 ? " - i" : " + i";
    double temp_img = img < 0 ? img * -1 : img;
    cout << real << sign << temp_img << endl;
  }
};

// Friend function
// Complex add(const Complex &c1, const Complex &c2)
// {
//   return Complex(c1.real + c2.real, c1.img + c2.img);
// }

int main()
{
  Complex c1(3, 4.5), c2(-5, 6.5);
  c1.operator+(c2).display();

  return 0;
}