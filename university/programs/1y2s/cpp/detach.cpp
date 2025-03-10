#include <bits/stdc++.h>
using namespace std;

void printNum()
{
  for (int i = 0; i <= 1875; i++)
  {
    cout << "Number: " << i << endl;
  }
}

int main()
{

  thread t1(printNum);
  t1.detach();

  for (int i = 0; i <= 18; i++)
  {
    cout << "Main: " << i << endl;
  }

  return 0;
}