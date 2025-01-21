#include <bits/stdc++.h>
using namespace std;

int main()
{
  uintptr_t addr = 0x21b3213be80; // Example address
  int *p = reinterpret_cast<int *>(addr);

  cout << *p << endl;
  return 0;
}