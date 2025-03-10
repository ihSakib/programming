#include <iostream>
using namespace std;

class Base
{
public:
  int a = 1;

protected:
  int b = 2;

private:
  int c = 3;
};

class Derived : protected Base
{
public:
  void display()
  {
    cout << a << " " << b << c << endl; // Allowed
                                        // cout << c; // Error: 'c' is private in Base
  }
};

int main()
{
  Derived d;
  cout << d.a << endl; // Allowed (public)
                       // cout << d.b; // Error: 'b' is protected
}
