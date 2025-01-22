// #ifndef MYHEADER_H
// #define MYHEADER_H

#include <iostream>
using namespace std;

// Function implemented directly in the header
inline void sayHello()
{
  cout << "Hello from myheader.h!" << endl;
}

// Class definition with inline method
class MyClass
{
public:
  void displayMessage()
  {
    cout << "This is a message from MyClass!" << endl;
  }
};

// #endif // MYHEADER_H
