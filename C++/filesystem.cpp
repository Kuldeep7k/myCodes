#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // Write
    ofstream example("File1.txt");
    example << "This is the new file content !";
    example.close();

    // Read
    ifstream example2("File1.txt");
    char c;
    while (example2.good())
    {
        cout << c;
        c = example2.get();
    }
}