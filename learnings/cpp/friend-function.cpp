#include <iostream>
using namespace std;

class Box
{
private:
    double width;

public:
    Box(double w) : width(w) {}

    // Friend function declaration
    friend void printWidth(Box box);
};

void printWidth(Box box)
{
    cout << "Width of box: " << box.width << endl;
}

int main()
{
    Box box(10.0);
    printWidth(box); // Access private member of Box
    return 0;
}
