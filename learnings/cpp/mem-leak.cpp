#include <bits/stdc++.h>
using namespace std;

int main()
{

  int *ptr = new int[1];

  *ptr = 10;

  cout << *ptr << endl;

  delete ptr; 

  cout << *ptr << endl; // dangling pointer

  return 0;
}
