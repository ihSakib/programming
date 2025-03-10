#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // Open the .jpg file in binary mode for reading
  ifstream inputFile("image.jpg", ios::binary);

  // Check if the file was opened successfully
  if (!inputFile)
  {
    cout << "Failed to open the file." << endl;
    return 1; // Return an error code
  }

  // Get the size of the file
  inputFile.seekg(0, ios::end);
  streampos fileSize = inputFile.tellg();
  inputFile.seekg(0, ios::beg);

  // Create a buffer to store the binary data
  char *buffer = new char[fileSize];

  // Read the binary data into the buffer
  inputFile.read(buffer, fileSize);

  // Check if the entire file was read
  if (!inputFile)
  {
    cout << "Error reading the file." << endl;
    delete[] buffer;
    return 1;
  }

  // Print out a message indicating the file was read successfully
  cout << "File read successfully. The size of the file is: " << fileSize << " bytes." << endl;

  // Optional: Write the data back to a new file
  ofstream outputFile("copy_image.jpg", ios::binary);
  if (!outputFile)
  {
    cout << "Failed to create the output file." << endl;
    delete[] buffer;
    return 1;
  }
  
  outputFile.write(buffer, fileSize);
  outputFile.close();

  // Clean up the allocated memory
  delete[] buffer;

  // Close the input file
  inputFile.close();

  return 0;
}
