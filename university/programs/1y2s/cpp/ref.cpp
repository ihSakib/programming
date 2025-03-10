#include <bits/stdc++.h>
using namespace std;

int main()
{
  int i = 10;
  int &j = i;
  cout << &i << "\n"
       << &j << endl;
  return 0;
}