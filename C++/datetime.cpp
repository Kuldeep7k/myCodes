#include <iostream>
#include <ctime>

using namespace std;

int main(){
    time_t now = time(0);

    tm *now_local_time = localtime(&now);
    
    int month = 1 + now_local_time->tm_mon;
    int day = now_local_time->tm_mday;
    int year = 1900 + now_local_time->tm_year;  
    int hour = now_local_time->tm_hour;
    int minutes = now_local_time->tm_min;
    int seconds = now_local_time->tm_sec;

    cout << day << "/" << month << "/" << year << endl << hour << ":" << minutes << ":" << seconds ;


}