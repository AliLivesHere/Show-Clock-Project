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

void Display(string h,string m,string s){
    int hour = stoi(h);
    int minute = stoi(m);
    int second = stoi(s);

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
    
    Display(hour,minute,second);
}

int main(){

return 0;
}