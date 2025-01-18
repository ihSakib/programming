#include <iostream>
using namespace std;

class Box
{
private:
    double width;

public:
    Box(double w) : width(w) {}

    // Friend function declaration
    // 'friend' keyword indicates it is not a member function
    friend void printWidth(Box box);
};

// Friend function definition
// Defined outside the class without using the 'Box::' scope resolution operator
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
