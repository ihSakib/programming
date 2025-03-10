#include <bits/stdc++.h>
using namespace std;

class S
{
private:
  int value;

public:
  S(int v) : value(v) {}

  operator int() const { return value; }
};

int main()
{
  S obj(5);
  int x = obj; // Implicit conversion from S to int
  cout << x << endl;

  return 0;
}