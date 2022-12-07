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

    string output;

    // Use a while loop together with the getline() function to read the file line by line
    while (!inFile.eof()) 
    {
        inFile >> output;

        //u can modify the string which to be written in ur copy test file like this
        output += " test";
        // Output the text from the file
        copyFile << output << endl;
    }

    // Close the file
    inFile.close();
    copyFile.close();
    return 0;
}