#include <iostream>
using namespace std;

void printNumbers(int n)
{
  // Base case: when n becomes 0, stop recursion
  if (n <= 0)
  {
    return;
  }

   // Recursive call before printing (this ensures printing in order)
  printNumbers(n - 1);

  // Print the current number
  cout << n << " ";
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  cout << "Numbers from 1 to " << n << ": ";
  printNumbers(n);

  return 0;
}
