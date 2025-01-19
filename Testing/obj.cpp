#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
  string name;
  int age;
};

int main()
{

  Person person1{"Iftekhar", 24};

  cout << person1.name << endl;
  cout << person1.age << endl;
  return 0;
}