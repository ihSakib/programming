#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    string name;
    int age;
    string subject;

    // Friend function to overload >> operator
    friend istream &operator>>(istream &input, Teacher &t);

    // Friend function to overload << operator for easy output
    friend ostream &operator<<(ostream &output, const Teacher &t);
};

// Overload >> operator to take input for Teacher object
istream &operator>>(istream &input, Teacher &t)
{
    cout << "Enter name: ";
    input >> t.name;
    cout << "Enter age: ";
    input >> t.age;
    cout << "Enter subject: ";
    input >> t.subject;
    return input;
}
// Overload << operator to output Teacher object
ostream &operator<<(ostream &output, const Teacher &t)
{
    output << "Name: " << t.name << ", Age: " << t.age << ", Subject: " << t.subject;
    return output;
}

int main()
{
    Teacher t1;

    cin >> t1;  // Take input directly for Teacher object
    cout << t1; // Output the Teacher object

    return 0;
}
