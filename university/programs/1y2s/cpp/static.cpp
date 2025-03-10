#include <iostream>
using namespace std;

class Demo
{
private:
  int nonStaticVar;     // Non-static member (each object has its own copy)
  static int staticVar; // Static member (shared across all objects)

public:
  // Constructor to initialize non-static variable
  Demo(int value)
  {
    nonStaticVar = value;
  }

  // Static function to modify static variable
  static void setStaticVar(int value)
  {
    staticVar = value;
  }

  // Non-static function to display values
  void display()
  {
    cout << "Non-static variable: " << nonStaticVar << endl;
    cout << "Static variable: " << staticVar << endl;
  }
};

// Initialize static variable outside the class
int Demo::staticVar = 0;

int main()
{
  Demo obj1(10), obj2(20);

  cout << "Initial values:\n";
  obj1.display();
  obj2.display();

  // Modifying non-static member (only affects obj1)
  obj1 = Demo(50);

  // Modifying static member (affects all objects)
  Demo::setStaticVar(100);

  cout << "\nAfter modification:\n";
  obj1.display();
  obj2.display();

  return 0;
}
