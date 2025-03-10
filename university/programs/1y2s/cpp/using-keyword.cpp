#include <iostream>
using namespace std;

class Base
{
public:
  void show() { cout << "Base show()" << endl; }
  void show(int x) { cout << "Base show(int): " << x << endl; }
};

class Derived : public Base
{
public:
   using Base::show; // Brings all versions of show() from Base
  void show() { cout << "Derived show()" << endl; }
};

int main()
{
  Derived d;
  d.show();   // Calls Derived::show()
  d.show(10); // Calls Base::show(int) due to 'using'
  return 0;
}
