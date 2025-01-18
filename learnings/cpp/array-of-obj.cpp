#include <iostream>
using namespace std;

// Define a simple class
class Student
{
public:
  string name;
  int age;

  // Default constructor
  Student() {}

  // Constructor
  Student(string n, int a) : name(n), age(a) {}

  // Method to display student details
  void display()
  {
    cout << "Name: " << name << ", Age: " << age << endl;
  }
};

int main()
{
  // Create an array of Student objects
  Student students[5]; // Default constructor is called for each object in the array

  // Display the details of the students before initialization
  for (int i = 0; i < 5; ++i)
  {
    students[i].display(); // Will show empty name and age = 0
  }

  // Initialize the array with student details
  students[0] = Student("John Doe", 20);
  students[1] = Student("Jane Smith", 19);
  students[2] = Student("Alice Johnson", 21);
  students[3] = Student("Bob Brown", 22);
  students[4] = Student("Charlie Davis", 23);

  // Display the details after initialization
  cout << "\nAfter Initialization:\n";
  for (int i = 0; i < 5; ++i)
  {
    students[i].display(); // Will show the assigned values
  }

  return 0;
}
