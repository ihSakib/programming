#include <iostream>
using namespace std;

int main()
{
  int *ptr1 = new int(); // Initialized to 0
  int *ptr2 = new int;   // Uninitialized (garbage value)

  cout << "ptr1: " << *ptr1 << endl; // Output: 0
  cout << "ptr2: " << *ptr2 << endl; // Output: Undefined (garbage value)

  delete ptr1;
  delete ptr2;

  return 0;
}
