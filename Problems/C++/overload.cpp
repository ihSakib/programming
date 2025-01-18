#include <iostream>
#include <iomanip>
using namespace std;

void add(int num1, int num2)
{
  cout << "Sum (int): " << num1 + num2 << endl;
}

void add(float num1, float num2)
{
  cout << fixed << setprecision(2); 
  cout << "Sum (float): " << num1 + num2 << endl;
}

void add(double num1, double num2)
{
  cout << fixed << setprecision(2);
  cout << "Sum (double): " << num1 + num2 << endl;
}

int main()
{
  add(1, 1);       // Calls add(int, int)
  add(1.5f, 2.5f); // Calls add(float, float)
  add(1.5, 2.5);   // Calls add(double, double)

  return 0;
}
