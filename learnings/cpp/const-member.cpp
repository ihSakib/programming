#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  const string name; // const member
  int age;

  // This would not work because const 'name' must be initialized using an initializer list

  // Student(string n, int a)
  // {
  //   name = n; // Error: const members cannot be assigned in the body
  //   age = a;
  // }

  // using initializer list
  Student(string n, int a) : name(n), age(a) {}

  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};

int main()
{

  Student student("Sakib", 23);
  student.display();
  
  return 0;
}