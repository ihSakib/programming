#include <iostream>
#include <string>
using namespace std;

// Template function for multiplying two values of different types
template <typename T>
T multiply(T a, T b)
{
  return a * b;
}

// Template function specialization for string
template <>
string multiply<string>(string a, string b)
{
  return a + b;
}

int main()
{
  cout << "Multiply of integers: " << multiply<int>(3, 4) << endl;
  cout << "Multiply of doubles: " << multiply<double>(3.5, 4.5) << endl;
  cout << "Sum of strings: " << multiply<string>("Hello ", "World") << endl;

  string name = "Sakib";
  cout << name.size() << endl;

  return 0;
}
