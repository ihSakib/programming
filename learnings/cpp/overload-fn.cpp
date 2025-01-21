#include <bits/stdc++.h>
using namespace std;

void addNum(int n1, int n2)
{
  cout << "first called" << endl;
  cout << (n1 + n2) << endl;
}

void addNum(double n1, double n2)
{
  cout << "second called" << endl;
  cout << (n1 + n2) << endl;
}

void addNum(int n1, double n2)
{
  cout << "third called" << endl;
  cout << (n1 + n2) << endl;
}

int main()
{

  addNum(10, 20);
  addNum(20.15, 1.5);
  addNum(2, 5.64);

  return 0;
}