#include <iostream>
#include <string>

using namespace std;

class person {
    public: string name;
    public: int age;
};

int main (){
    person p1;
    p1.name ="Ram";
    p1.age = 25;

    cout << "Person p1 : " << p1.name << "\t" << p1.age << "\n"; 

    person p2;
    p2.name ="Sam";
    p2.age = 27;

    cout << "Person p2 : " << p2.name << "\t" << p2.age << "\n"; 
}
