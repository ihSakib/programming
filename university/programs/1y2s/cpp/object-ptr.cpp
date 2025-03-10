#include <iostream>
using namespace std;

class Shape
{
public:
  virtual void draw() { cout << "Drawing Shape" << endl; }
};

class Circle : public Shape
{
public:
  void draw() override { cout << "Drawing Circle" << endl; }
};

int main()
{
  Circle circle;
  circle.draw();
  return 0;
}