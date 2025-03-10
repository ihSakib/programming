#include <iostream>
using namespace std;

class Example
{
public:
  int value;

  Example(int v) : value(v) {}

  void display()
  {
    cout << "Value: " << value << endl;
  }
};

int main()
{
  // Dynamically allocate an array of objects
  Example arr[3]{{1}, {2}, {3}};

  // Display the values
  for (int i = 0; i < 3; ++i)
  {
    arr[i].display();
  }

  return 0;
}
