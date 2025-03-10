#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3>
class Trio
{
private:
  T1 first;
  T2 second;
  T3 third;

public:
  Trio(T1 a, T2 b, T3 c) : first(a), second(b), third(c) {}
  void display()
  {
    cout << "First: " << first << ", Second: " << second << ", Third: " << third << endl;
  }
};

int main()
{
  Trio<int, double, string> t(10, 5.5, "Hello");
  t.display(); // Output: First: 10, Second: 5.5, Third: Hello
  return 0;
}
