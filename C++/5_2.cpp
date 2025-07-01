//Define a class Time with attributes hr, min and sec. Define different types of constructors
//to initialize the object of Time. Default constructor should initialize the time with 12 hr, 0
//min and 0 sec. Parameterized constructor should initialize the time accordingly as user
//inputs the time in seconds. (Suppose user input time as 100 secs then constructor should
//initialize the object with 0 hr 1 min 40 secs. Also define 2nd object of time to copy value of
//1st object to new object using copy constructor

#include<iostream>

using namespace std;

class Time{
    unsigned int hr, min, sec;
public:
    void displayTime(){
        cout<<hr<<"hr "<<min<<"min "<<sec<<"sec "<<endl;
    }

    Time(){
        hr = 12;
        min = 0;
        sec = 0;
    }

    Time(int s){
        hr = s/3600;
        s = s%3600;
        min = s/60;
        s = s%60;
        sec = s;
    }
};

int main(){
    Time t;
    t.displayTime();
    Time t1(100);
    t1.displayTime();
    Time t2(200);
    t2.displayTime();
    Time t3(t1);
    t3.displayTime();
    Time t4(96408);
    t4.displayTime();
}