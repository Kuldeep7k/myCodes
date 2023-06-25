#include <iostream>
#include <string>

using namespace std;

struct phone {
    string modelname;
    string os;
    float prince;
    int memory;
    int camera;
    double battery;

};

int main(){
    phone p1;
    p1.modelname  = "Google Pixel 10";
    p1.os = "Android 15";
    p1.prince = 150.11f;
    p1.memory = 20;
    p1.camera = 400;
    p1.battery = 4780.01;

    cout << "P1 : " << p1.modelname << "\n" << p1.os << "\t" << p1.prince << "\t" << p1.memory << "\t" << p1.camera << "\t" << p1.battery << "\n" ;


    phone p2;
    p2.modelname  = "iPhone 19";
    p2.os = "iOS 20";
    p2.prince = 200.11f;
    p2.memory = 15;
    p2.camera = 200;
    p2.battery = 4000.01;

    cout << "p2 : " << p2.modelname << "\n" << p2.os << "\t" << p2.prince << "\t" << p2.memory << "\t" << p2.camera << "\t" << p2.battery ;
}