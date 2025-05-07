#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
#include <iomanip>
using namespace std;

string GetTime(){
    string info= "";
    long long now = time(0);
    return ctime(&now);
}



void ProcessTime(int hour,int minute, int second){
    while (true){
        system("cls");
        cout << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":" << setw(2) << second << "\n";
        Sleep(1000);
        second++;
        if (second>59){
            second = 0;
            minute++;

        }
        if (minute>59){
            minute = 0;
            hour++;
        }
        if (hour>23){
            hour = 0;
        }
    }
}



void Display(string h,string m,string s){
    int hour = stoi(h);
    int minute = stoi(m);
    int second = stoi(s);
    ProcessTime(hour,minute,second);
}



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
ThrowAwayTheGabageInfo();
return 0;
}