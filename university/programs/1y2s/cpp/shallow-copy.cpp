#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
  int *roll;

  Student()
  {
   
  }

  ~Student()
  {
    delete roll;
  }
};

int main()
{

  Student s1;
  *s1.roll = 101;

  Student s2 = s1;
  *s2.roll = 102;

  cout << *s1.roll << " " << *s2.roll << endl; // Output: 101 102 (Both objects share the same memory)

  return 0;
}