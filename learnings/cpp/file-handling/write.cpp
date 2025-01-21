#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create an output file stream object
    ofstream outFile;

    // Open a file for writing
    outFile.open("output.txt");

    // Check if the file opened successfully
    if (outFile.is_open())
    {
        outFile << "Hello, this is a test message!" << endl;
        outFile << "Writing more data to the file." << endl;
       

        // Close the file after writing
        outFile.close();
        cout << "Data written to the file successfully." << endl;
    }
    else
    {
        cout << "Unable to open file for writing." << endl;
    }

    return 0;
}
