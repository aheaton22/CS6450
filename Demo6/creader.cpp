#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/**
 * @brief Reads in a file from the command line and prints out each line and its length.
 * 
 * @param argc The number of arguments passed to the program.
 * @param argv An array of strings containing the arguments passed to the program.
 * @return int Returns 0 upon successful completion of the program.
 */
int main(int argc, char* argv[]) {
    //read in file from command line
    string filename = argv[1];
    //open file
    ifstream file(filename);
    //read in file line by line
    string line;
    while (getline(file, line))
    {
        //print out line
        cout << line << endl;

        //print out line length
        cout << line.length() << endl;
    }
    return 0;
}
