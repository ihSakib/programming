#include <bits/stdc++.h>
using namespace std;

typedef struct // anonymous struct
{
  string name;
  int age;
  float weight;
} Person;

int main()
{
  Person p{"John", 20, 40.5};

  cout << "Name: " << p.name << endl;
  cout << "Age: " << p.age << endl;
  cout << "Weight: " << p.weight << " kg" << endl;

  return 0;
}