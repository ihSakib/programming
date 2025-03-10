#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
  string name;
  int age;

public:
  // input
  friend istream &operator>>(istream &is, Student &s)
  {
    cout << "Enter name: ";
    getline(is, s.name);
    cout << "Enter age: ";
    is >> s.age;
    return is;
  }

  // output
  friend ostream &operator<<(ostream &os, Student &s)
  {
    os << "Name: " << s.name << endl;
    os << "Age: " << s.age << endl;
    return os;
  }
};

int main()
{
  Student s;
  cin >> s;
  cout << s;

  return 0;
}