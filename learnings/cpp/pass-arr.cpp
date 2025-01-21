#include <bits/stdc++.h>
using namespace std;

void print(int n, int arr[])
{

  for (size_t i = 0; i < 6; i++)
  {
    arr[i] = arr[i] + 1;
    cout << arr[i] << " ";
  }

  cout << endl;
}

int main()
{
  int arr[] = {0, 1, 2, 3, 4, 5};

  // print by function
  print(6, arr);

  // print directly

  for (size_t i = 0; i < 6; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}