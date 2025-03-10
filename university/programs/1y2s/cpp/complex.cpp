#include <bits/stdc++.h>
using namespace std;

class Complex
{

public:
  int real, imag;

  Complex(int r = 0, int i = 0)
  {
    real = r;
    imag = i;
  }

  void display()
  {
    cout << real << " + " << imag << "i" << endl;
  }

  Complex operator+(Complex const &obj)
  {
    return Complex(real + obj.real, imag + obj.imag);
  }

  Complex operator+(const int &v)
  {
    return Complex(real + v, imag);
  }

  // friend Complex operator+(const int &v, const Complex &obj);
};

void operator+(const int &v, const int &x)
{
  cout << "Sum of " << v << " and " << x << " is " << v + x << endl;
}

int main()
{
  Complex c1(1, -5), c2(8, 9), c3;

  c3 = c1 + c2;
  c3.display();

  c3 = c1 + 2;
  c3.display();

  // c3 = operator+(20, c1);
  operator+(20, c1);


  return 0;
}