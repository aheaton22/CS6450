#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
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
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
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