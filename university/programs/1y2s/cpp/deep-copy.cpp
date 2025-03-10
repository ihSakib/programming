#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
  string *name;

  Student()
  {
    name = new string();
  }

  Student(const Student &s)
  {
    // name = s.name; // shallow copy
    // *name = new string(*(s.name)); // deep copy
    //  *name = *(s.name); // deep copy
  }

  ~Student() { delete name; }
}

;

int main()
{
  Student s1;
  *(s1.name) = "John";
  Student s2 = s1;
  *(s2.name) = "Jane";

  cout << "s1: " << *(s1.name) << endl;
  cout << "s2: " << *(s2.name) << endl;

  return 0;
}