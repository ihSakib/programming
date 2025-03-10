#include <iostream>
#include <string>
using namespace std;

// Base class: Media
class Media
{
protected:
  string title;
  string publicationDate;

public:
  virtual void read() = 0;
  virtual void show() = 0;

  // Destructor
  virtual ~Media() {}
};

// Derived class: Book
class Book : public Media
{
private:
  int numPages;

public:
  // Overriding the read function
  void read() override
  {
    cout << "Book Title: ";
    cin.ignore();
    getline(cin, title);
    cout << "Publication Date: ";
    cin >> publicationDate;
    cout << "Number of Pages: ";
    cin >> numPages;
  }

  // Overriding the show function
  void show() override
  {
    cout << "Book Title: " << title << "\nPublication Date: " << publicationDate
         << "\nNumber of Pages: " << numPages << endl;
  }
};

// Derived class: Audio
class Audio : public Media
{
private:
  double playTime; // Time in hours

public:
  // Overriding the read function
  void read() override

  {
    cout << "Audio Title: ";
    cin.ignore();
    getline(cin, title);
    cout << "Publication Date: ";
    cin >> publicationDate;
    cout << "Play Time: ";
    cin >> playTime;
  }

  // Overriding the show function
  void show() override
  {
    cout << "Audiobook Title: " << title << "\nPublication Date: " << publicationDate
         << "\nPlaying Time: " << playTime << " hours" << endl;
  }
};

// Main function to demonstrate the class hierarchy
int main()
{

  // Creating objects of Book and Audio
  Media *media1 = new Book();
  Media *media2 = new Audio();

  // Demonstrating polymorphism with virtual functions
  cout << "Media 1 Details: \n";
  media1->read(); // Calls Book's read method
  media1->show(); // Calls Book's show method

  cout << "\nMedia 2 Details: \n";
  media2->read(); // Calls Audio's read method
  media2->show(); // Calls Audio's show method

  // Cleaning up dynamic memory
  delete media1;
  delete media2;

  return 0;
}
