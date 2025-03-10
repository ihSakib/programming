#include <iostream>
using namespace std;

class Car
{
public:
  string brand;
  int year;

  // Constructor
  Car(string b, int y)
  {
    brand = b;
    year = y;
  }

  void display()
  {
    cout << "Brand: " << brand << ", Year: " << year << endl;
  }
};

int main()
{
  // Creating an object dynamically using a pointer
  Car *carPtr = new Car("Tesla", 2023);

  // Accessing members using '->' operator
  carPtr->display();
  // or
  // (*carPtr).display();

  // Free the allocated memory
  delete carPtr;

  return 0;
}
