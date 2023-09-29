#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    //read in the file from command line 
    std::string filename;
    if (argc > 1) {
        filename = argv[1];
    } else {
        std::cout << "Please provide a filename as a command line argument." << std::endl;
        return 1;
    }

    // rest of your code goes here
    // ...
}

/*Started with 
int main(args[])
{
    //read in the file from command line 
    string filename = args[1];

*/