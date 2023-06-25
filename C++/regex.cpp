#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main (){
    string s = "SpiderMan";
    
    regex pattern("(Spi)(.*)");
    if (regex_match(s,pattern)){
        cout << "Matched";
    }

}