// *********************************************************
// Program: LightMariaDBInterpreter.cpp
// Course: CCP6114 Programming Fundamentals
// Lecture Class: TC3L
// Tutorial Class: TT5L
// Trimester: 2430
// Member_1: 242UC244SX | YAP YANG YI | YAP.YANG.YI@mmu.edu.my | 0169035825
// Member_2: 243UC24672 | LAI SENG KUNG | LAI.SENG.KUNG@student.mmu.edu.my | 0129169228
// Member_3: ID | NAME | EMAIL | PHONE
// Member_4: ID | NAME | EMAIL | PHONE
// *********************************************************

#include <iostream>
#include <string>
#include <fstream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    ifstream inputFile;
    ofstream outputFile;
    string filename;
    string line; // Variable to store each line of the file
    vector<string> output{};
    int arraySize;

    // Get the filename from the user
    cout << "Enter the filename: ";
    cin >> filename;

    // Open the file
    inputFile.open(filename);

    // If the file successfully opened, process it
    if (inputFile)
    {
        // Check if the file is empty
        if (inputFile.peek() == ifstream::traits_type::eof())
        {
            cout << "The file is empty.\n";
        }
        else
        {
            // Read and store each line of the file
            while (getline(inputFile, line))
            {
                output.push_back(line);
                arraySize++;
            }
        }
        // Close the file
        inputFile.close();
    }
    else
    {
        // Display an error message
        cout << "Error opening the file.\n";
    }

    // Display Output
    for (string a : output)
        cout << a << endl;

    // Write the Output to a file
    string c = output[0];
    int e = c.length();
    string outputFileName = c.substr(7,e-1);
    outputFile.open (outputFileName);
    for (string b : output)
        outputFile << b << endl;

    return 0;
}

void insertrow()
{
    string a = output[x];
    int len = a.length();

    // Check Keyword "INSERT INTO"
    if (len.substr(1,len-1) == "INSERT TO");
    {

        outputFile << ">INSERT INTO" << endl;
        string nextLine = output(x+1);
        int lenNextLine = nextLine(nextLine);
            // Check Keyword "customer"
            if (nextLine.substr(1,8)== "customer")
            {
                outputFile << output(x+1) <<endl;

                string nextTwoLine = output(x+2);
                int lenNextTwoLine = nextLine(nextLine);
                // Check Keyword "VALUES"
                if (nextTwoLine.substr(1,6)=="VALUES")
                {
                    // add customer detail
                }
            }

    }




}
