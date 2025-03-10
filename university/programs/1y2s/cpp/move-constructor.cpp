#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
  char *data;
  size_t size;

public:
  // Constructor
  String(const char *str)
  {
    size = strlen(str);
    data = new char[size + 1];
    strcpy(data, str);
    cout << "Constructor called for: " << data << endl;
  }

  // **Move Constructor**
  String(String &&other) noexcept
  {
    data = other.data;
    size = other.size;

    // Transfer ownership, nullify the source
    other.data = nullptr;
    other.size = 0;

    cout << "Move constructor called" << endl;
  }

  // Destructor
  ~String()
  {
    delete[] data;
  }

  void display() const
  {
    if (data)
      cout << data << endl;
    else
      cout << "Object moved, no data" << endl;
  }
};

// Function that returns a temporary object
String createString()
{
  return String("Hello World");
}

int main()
{
  String s1 = createString(); // Move constructor is called
  s1.display();

  String s2 = move(s1); // Move constructor is called
  s2.display();
  s1.display(); // s1 is now empty since ownership was transferred

  return 0;
}
