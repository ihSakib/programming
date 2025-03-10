#include <iostream>
using namespace std;

double divide(double x, double y)
{
  try
  {
    if (y == 0)
    {
      throw "Division by zero!";
    }
    else
    {
      return x / y;
    }
  }
  catch (const char* e)
  {
    cout << "Exception: " << e << endl;
    return 0;
  }
}

int main()
{

  cout << "Enter two numbers: ";
  double x, y;
  cin >> x >> y;
  double result = divide(x, y);
  cout << "Result: " << result << endl;
  cout << "Program continues after exception handling." << endl;

  return 0;
}
