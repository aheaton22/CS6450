#include <iostream>
#include <string>

#include <fstream> // include the necessary header file
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    //read in file from command line 
    std::string filename = argv[1];
    std::ifstream file(filename); // use ifstream instead of open
    if (!file.is_open()) { // check if the file was opened successfully
        std::cerr << "Error: could not open file " << filename << std::endl;
        return 1;
    }
    // do something with the file
    file.close(); // close the file when you're done with it

    return 0;
}

