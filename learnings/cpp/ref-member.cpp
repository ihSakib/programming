#include <iostream>
using namespace std;

class Student
{
public:
  string &name; // Reference member
  int age;

  // Constructor with initializer list
  Student(string &n, int a) : name(n), age(a) {}

  void print()
  {
    cout << "Name: " << name << ", Age: " << age << endl;
  }
};

int main()
{
  string studentName = "Alice";      // A string to hold the student's name
  Student student1(studentName, 22); // Pass the reference to 'studentName' and the age

  student1.print(); // Output: Name: Alice, Age: 22

  studentName = "Bob"; // Change the original string

  student1.print(); // Output: Name: Bob, Age: 22 (Reference reflects the change)

  return 0;
}
