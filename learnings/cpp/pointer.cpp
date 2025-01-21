#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x;
  int *ptr = &x;

  cout << ptr << endl;  // value of pointer
  cout << &x << endl;   // address of x
  cout << &ptr << endl; // address of pointer

  return 0;
}