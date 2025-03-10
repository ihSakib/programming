#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student
{
  string name;
  float percentage;
  int meritNo;
};

// Function to read student data
void readData(vector<Student> &students, int n)
{
  for (int i = 0; i < n; ++i)
  {
    Student s;
    cout << "Enter name of student " << i + 1 << ": ";
    cin >> s.name;
    cout << "Enter percentage of student " << i + 1 << ": ";
    cin >> s.percentage;
    students.push_back(s);
  }
}

// Function to sort students based on percentage
void sortStudents(vector<Student> &students)
{
  sort(students.begin(), students.end(), [](const Student &a, const Student &b)
       { return a.percentage > b.percentage; });
}

// Function to generate merit numbers
void generateMeritList(vector<Student> &students)
{
  for (int i = 0; i < students.size(); ++i)
  {
    students[i].meritNo = i + 1;
  }
}

// Function to print the merit list
void printMeritList(const vector<Student> &students)
{
  cout << "\nMerit List:\n";
  cout << "Rank\tName\tPercentage\n";
  for (const auto &s : students)
  {
    cout << s.meritNo << "\t" << s.name << "\t" << s.percentage << "%\n";
  }
}

int main()
{
  int n;
  cout << "Enter the number of students: ";
  cin >> n;

  vector<Student> students;

  readData(students, n);
  sortStudents(students);
  generateMeritList(students);
  printMeritList(students);

  return 0;
}
