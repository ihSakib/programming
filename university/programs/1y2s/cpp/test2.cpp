#include <bits/stdc++.h>
using namespace std;

class Student
{
  int roll;
  string name;
  float marks;

public:
  Student() = default;
  Student(int r, string n, float m)
  {
    roll = r;
    name = n;
    marks = m;
  }
  friend void display(Student &s);
};

class Teacher
{
  string name;
  int id;

public:
  Teacher(string n, int i)
  {
    name = n;
    id = i;
  }
  friend void display(Teacher &teacher);
};

void display(Student &s)
{
  cout << "Roll: " << s.roll << ", Name: " << s.name << ", Marks: " << s.marks << endl;
}

void display(Teacher &teacher)
{
  cout << "Name: " << teacher.name << ", ID: " << teacher.id << endl;
}

int main()
{
  Student s[]{{200, "A", 100}, {200, "B", 100}, {200, "C", 100}, {200, "D", 500}};

  for (int i = 0; i < 4; i++)
  {
    display(s[i]);
  }
  Teacher t("Alice", 101);
  display(t);

  return 0;
}