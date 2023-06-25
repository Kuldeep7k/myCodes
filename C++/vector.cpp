#include <iostream>
#include <vector>
#include <String>

using namespace std;

int main()
{
    vector<string> v1;
    v1.push_back("abc");
    v1.push_back("def");
    v1.push_back("ghi");
    v1.pop_back();

    for (int i=0; i<v1.size(); i++){
        cout<< v1[i] << " ";
    }

    v1.clear();
    cout << endl << v1.size();
}