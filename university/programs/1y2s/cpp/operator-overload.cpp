#include <iostream>
using namespace std;

// Overloading the + operator for two integers
int operator+(int a, int b)
{
  return a + b; // You can add custom logic here if needed
}

int main()
{
  int result = 5 + 2; // Using the overloaded + operator
  cout << "Result of 5 + 2: " << result << endl;
  return 0;
}
