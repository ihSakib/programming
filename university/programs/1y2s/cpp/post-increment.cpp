#include <iostream>
using namespace std;

class MyClass
{
public:
  int value;

  MyClass(int v) : value(v) {}

  // Overload the post-increment operator
  MyClass operator++(int)
  {
    MyClass temp = *this; // Store the current object
    value++;              // Increment the value
    return temp;          // Return the original object
  }

  // Overload the post-decrement operator
  MyClass operator--(int)
  {
    MyClass temp = *this; // Store the current object
    value--;              // Decrement the value
    return temp;          // Return the original object
  }

  // Display the value
  void display()
  {
    cout << "Value: " << value << endl;
  }
};

int main()
{
  MyClass obj(10);
  obj.display();

  // Post-increment
  MyClass postIncObj = obj++;
  postIncObj.display(); // Display the original object (before increment)
  obj.display();        // Display the updated object (after increment)

  // Post-decrement
  MyClass postDecObj = obj--;
  postDecObj.display(); // Display the original object (before decrement)
  obj.display();        // Display the updated object (after decrement)

  return 0;
}
