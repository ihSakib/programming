#include <iostream>
#include <cstdio> // Required for freopen
#include <iomanip>
using namespace std;

class Student
{
public:
  string name;
  int id;
  int age;
};

int main()
{

  Student student[] = {
      {"John", 1323224, 18},
      {"Alice", 2434344, 20},
      {"Bob", 3234209, 19},
      {"Charlie", 443243, 21}};

  freopen("docs/result.txt", "w", stdout);

  cout << left << setw(20) << "Name" << setw(20) << "ID" << setw(20) << "Age" << endl;
  cout << string(60, '-') << endl;

  for (size_t i = 0; i < sizeof(student) / sizeof(student[0]); i++)
  {
    cout << left << setw(20) << student[i].name << setw(20) << student[i].id << setw(20) << student[i].age << endl;
    ;
  }

  // Reset stdout to the original output for windows
  freopen("CON", "w", stdout);

  cout << "Hey Terminal" << endl;

  return 0;
}
