#include <iostream>
#include <string>

using namespace std;

// Base class: House
class House
{
public:
  // Properties of a house
  int numRooms;
  double area;

  // Constructor
  House(int rooms, double areaSize) : numRooms(rooms), area(areaSize) {}

  // Member function to get house details
  void getHouseDetails()
  {
    cout << "House Details:\n";
    cout << "Number of Rooms: " << numRooms << endl;
    cout << "Area: " << area << " sq meters" << endl;
  }
};

// Base class: Van
class Van
{
public:
  // Properties of a van
  int capacity;
  string vanType;

  // Constructor
  Van(int cap, const string type) : capacity(cap), vanType(type) {}

  // Member function to get van details
  void getVanDetails()
  {
    cout << "Van Details:\n";
    cout << "Capacity: " << capacity << " persons\n";
    cout << "Van Type: " << vanType << endl;
  }
};

// Derived class: Campervan inheriting from both House and Van
class Campervan : public House, public Van
{
public:
  // Constructor
  Campervan(int rooms, double areaSize, int cap, const string &type)
      : House(rooms, areaSize), Van(cap, type) {}

  // Member function to get campervan details
  void getCampervanDetails()
  {
    cout << "\nCampervan Details:\n";
    getHouseDetails(); // Call base class function
    getVanDetails();   // Call base class function
  }
};

int main()
{
  // Creating an instance of Campervan
  Campervan myCampervan(3, 50.0, 5, "Luxury");

  // Displaying Campervan details
  myCampervan.getCampervanDetails();

  return 0;
}
