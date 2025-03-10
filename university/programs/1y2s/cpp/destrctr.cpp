#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
  Car()
  {
    cout << "Constructor Called!" << endl;
  }

  ~Car()
  {
    cout << "Destructor Called!" << endl;
  }
};

int main()
{
  {
    Car car1;
    Car car2;
    cout << "scope 1 end" << endl;
  }
  {
    Car car1;
    cout << "scope 2 end" << endl;
  }
  return 0;
}
