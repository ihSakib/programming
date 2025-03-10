#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int id;

public:
    Student(string n, int i)
    {
        name = n;
        id = i;
    }

    void display()
    {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main()
{
    Student students[]{{"Sakib", 100}, {"Jerry", 200}, {"Tom", 400}};

    for (auto &student : students)
    {
        student.display();
    }
    
    return 0;
}