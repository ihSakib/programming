#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // Create an input file stream object
  ifstream inFile;
  // Create an output file stream object to write to a new file called "output.cpp"
  ofstream outFile;

  // Open the file for reading
  inFile.open(__FILE__);

  // Open the file for writing (or creating if it doesn't exist)
  outFile.open("output.cpp", ios::out);

  // Check if the file opened successfully
  if (inFile.is_open())
  {
    string line;
    // Read the file line by line
    while (getline(inFile, line))
    {
      outFile << line << endl;
    }

    // Close the file after reading
    inFile.close();
    cout << "File read successfully." << endl;

    // Close the file after writing
    outFile.close();
    cout << "Data written to the file successfully." << endl;
  }
  else
  {
    cout << "Unable to open the file for reading." << endl;
  }

  return 0;
}
