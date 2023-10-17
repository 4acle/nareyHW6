/**
 * Description: This C++ application copies the contents of one file to another.
 * Command-line Arguments: <source_file> <destination_file>
 * Example Invocation: ./myCopier source.txt destination.txt
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
    // Check for the correct number of command-line arguments
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <source_file> <destination_file>" << endl;
        return 1;
    }

    // Open the source file for reading
    ifstream sourceFile(argv[1]);
    if (!sourceFile.is_open()) {
        cerr << "Error: Could not open source file." << endl;
        return 1;
    }

    // Open the destination file for writing
    ofstream destinationFile(argv[2]);
    if (!destinationFile.is_open()) {
        cerr << "Error: Could not open destination file." << endl;
        sourceFile.close(); // Close the source file
        return 1;
    }

    // Copy contents line by line from the source to the destination file
    string line;
    while (getline(sourceFile, line)) {
        destinationFile << line << endl;
    }

    // Close both files
    sourceFile.close();
    destinationFile.close();

    cout << "File copied successfully." << endl;

    return 0;
}

