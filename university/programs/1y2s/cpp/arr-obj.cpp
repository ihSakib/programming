#include <iostream>
using namespace std;

class Car
{
public:
  string brand;
  int year;

  // Constructor
  Car(string b = "", int y = 0)
  { // Default constructor added
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
  int size;

  // Taking input for the number of cars
  cout << "Enter the number of cars: ";
  cin >> size;

  // Creating an array of objects dynamically
  Car cars[size];

  // Taking input for each object
  for (int i = 0; i < size; i++)
  {
    string brand;
    int year;

    cout << "Enter brand for car " << i + 1 << ": ";
    cin >> brand;
    cout << "Enter year for car " << i + 1 << ": ";
    cin >> year;

    cars[i] = Car(brand, year); // Assigning values
  }

  // Displaying all cars
  cout << "\nCar Details:\n";
  for (int i = 0; i < size; i++)
  {
    cars[i].display();
  }

  // Free dynamically allocated memory
  // delete[] cars;

  return 0;
}
