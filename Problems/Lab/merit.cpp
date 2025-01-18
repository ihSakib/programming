#include <iostream>
#include <iomanip>
using namespace std;

class Merit
{
private:
  string name;
  float percentage;
  int meritNo;

public:
  Merit() {}

  Merit(string name, float persentage)
  {
    this->name = name;
    this->percentage = persentage;
  }

  void sort(Merit students[], int n)
  {
    for (int i = 0; i < n - 1; i++)
    {
      for (int j = 0; j < n - i - 1; j++)
      {
        if (students[j].percentage < students[j + 1].percentage)
        {
          swap(students[j], students[j + 1]);
        }
      }
    }
  }
  void assignMerit(Merit students[], int n)
  {
    for (size_t i = 0; i < n; i++)
    {
      students[i].meritNo = i + 1;
    }
  }

  void printMerit(Merit students[], int n)
  {
    cout << left << setw(30) << "Student Name"
         << setw(15) << "Percentage"
         << setw(10) << "Merit No" << endl;

    cout << string(55, '-') << endl;

    for (int i = 0; i < n; i++)
    {
      cout << left << setw(30) << students[i].name
           << setw(15) << students[i].percentage
           << setw(10) << students[i].meritNo << endl;
    }

    cout << endl;
  }
};

int main()
{
  int n;
  cout << "Number of students: ";
  cin >> n;

  Merit students[n];

  cout << "Enter student's name and percentage: " << "\n\n";
  for (int i = 0; i < n; i++)
  {
    string name;
    float percentage;
    cout << "Student " << i + 1 << endl;
    ;
    cout << "Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Percentage: ";
    cin >> percentage;
    students[i] = Merit(name, percentage);
    cout << endl;
  }

  cout << "Sorting..." << endl;
  students[0].sort(students, n);

  cout << "Merit assigned..." << "\n\n";
  students[0].assignMerit(students, n);

  cout << "Merit List:" << endl;
  students[0].printMerit(students, n);

  return 0;
}
