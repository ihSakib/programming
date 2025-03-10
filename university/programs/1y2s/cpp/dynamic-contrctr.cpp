#include <bits/stdc++.h>
using namespace std;

class Car
{
private:
  string *brand;

public:
  // Constructor
  Car(string b)
  {
    brand = new string(b); // Dynamic allocation
  }

  void display()
  {
    cout << "Brand: " << *brand << endl;
  }

  // Destructor to free memory
  ~Car()
  {
    delete brand;
    cout << "Memory Freed!" << endl;
  }
};

int main()
{
  Car car1("Ferrari");
  car1.display();

  return 0;
}
