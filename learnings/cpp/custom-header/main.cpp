#include <iostream>
#include "myheader.h"
using namespace std;

int main()
{
  // Call the function from the header
  sayHello();

  // Create an object of the class
  MyClass obj;
  obj.displayMessage();

  return 0;
}