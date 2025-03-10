#include <iostream>
using namespace std;

// Template class for a Pair of values
template <typename T1, typename T2>
class Pair
{
private:
  T1 first;
  T2 second;

public:
  Pair(T1 a, T2 b) : first(a), second(b) {}

  void display()
  {
    cout << "First: " << first << ", Second: " << second << endl;
  }
};

int main()
{
  Pair<int, double> p1(1, 2.5); // Pair of int and double
  p1.display();

  Pair<string, int> p2("Age", 25); // Pair of string and int
  p2.display();

  return 0;
}
