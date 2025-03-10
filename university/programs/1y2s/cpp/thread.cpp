#include <iostream>
#include <thread>
using namespace std;

// Task 1: Print numbers from 1 to 5
void printNumbers()
{
  for (int i = 1; i <= 5; i++)
  {
    cout << "Number: " << i << endl;
  }
}

// Task 2: Print letters from 'A' to 'E'
void printLetters()
{
  for (char c = 'A'; c <= 'E'; c++)
  {
    cout << "Letter: " << c << endl;
  }
}

// Task 3: Print squares of numbers from 1 to 5
void printSquares()
{
  for (int i = 1; i <= 5; i++)
  {
    cout << "Square of " << i << ": " << i * i << endl;
  }
}

int main()
{
  // Create 3 threads for different tasks
  thread t1(printNumbers); // Task 1
  thread t2(printLetters); // Task 2
  thread t3(printSquares); // Task 3

  // Wait for all threads to finish
  t1.join();
  t2.join();
  t3.join();

  cout << "Main thread done.\n";
  return 0;
}
