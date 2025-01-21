#include <bits/stdc++.h>
using namespace std;

int main()
{
  int *i;
  int n;
  i = new int[1];

  for (int j = 0; j < 6; j++)
  {
    *(i + j) = j;
  }

  for (size_t j = 0; j < 6; j++)
  {
    cout << *(i + j) << " ";
  }

  return 0;
}