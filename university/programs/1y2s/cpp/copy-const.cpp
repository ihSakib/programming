#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
  string brand;
  int year;

  // Parameterized Constructor
  Car(string b, int y)
  {
    brand = b;
    year = y;
  }

  // Copy Constructor
  Car(const Car &obj)
  {
    brand = obj.brand;
    year = obj.year;
  }

  void display()
  {
    cout << "Brand: " << brand << ", Year: " << year << endl;
  }
};

int main()
{
  Car car1("Ford", 2021);
  Car car2 = car1; // Copy Constructor is called

  car1.display();
  car2.display();

  // Modifying the copied object

  car2.brand = "Chevy";
  car2.year = 2022;

  car1.display();
  car2.display();

  return 0;
}
