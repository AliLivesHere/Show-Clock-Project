#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;

string GetTime(){
    string info= "";
    long long now = time(0);
    return ctime(&now);
};
void ThrowAwayTheGabageInfo(){
    string info = GetTime();
    int index = info.find(":");

    string hour;
    hour = info[index-2];
    hour +=info[index-1];

    string minute;
    minute = info[index+1];
    minute +=info[index+2];

    string second;
    second = info[index+4];
    second +=info[index+5];
}

int main(){

return 0;
}