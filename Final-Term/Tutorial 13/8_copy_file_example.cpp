#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream inFile("filename.txt");
    ofstream copyFile("filename_copy.txt");

    int grade, numberOfGrades = 0;

    // Use a while loop together with the getline() function to read the file line by line
    while (!inFile.eof()) 
    {
        inFile >> grade;
        // Output the text from the file
        copyFile << grade << endl;
    }

    // Close the file
    inFile.close();
    copyFile.close();
    return 0;
}