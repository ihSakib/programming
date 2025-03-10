#include <bits/stdc++.h>
using namespace std;

class protectedClass
{
protected:
  int x;

public:
  protectedClass(int x = 0) : x(x) {}
  void display()
  {
    cout << "x: " << x << endl;
  }
};

class inheritedClass : protected protectedClass
{
public:
  inheritedClass(int x) : protectedClass(x) {}
  void display()
  {
    cout << "x: " << x << endl;
  }
};
int main()
{
  inheritedClass obj(10);
  obj.display();

  return 0;
}