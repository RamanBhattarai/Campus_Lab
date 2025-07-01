#include<iostream>

using namespace std;

class Time{
    int hr=0;
    int mn=0;
    int sec=0;
    public:
    Time(){
        hr = 12;
        mn = 0;
        sec = 0;
        display();
    }
    Time(int t){
        if (t>=60){
            mn = t / 60;
            sec = t - mn * 60;
            if (mn>=60){
                hr = mn / 60;
                mn = mn - hr * 60;
                if (hr>=12){
                    hr -= (hr / 12)*12;
                }
            }
        }
        display();
    }
    Time(Time &a){
        hr = a.hr;
        mn = a.mn;
        sec = a.sec;
        display();
    }
    void display(){
        cout<<hr<<":"<<mn<<":"<<sec<<endl;
    }
};

int main(){
    cout<<"Time:"<<endl;
    Time();
    Time t2(11922);
    Time t3(t2);
    return 0;
}
