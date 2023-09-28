#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/**
 * @brief Reads in a file and prints its contents to the console.
 * 
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line arguments.
 * @return int Returns 0 on successful execution.
 */
int main(int argc, char* argv[])
{
    //read in file 
    string filename = argv[1];
    ifstream file(filename);
    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
    return 0;
}