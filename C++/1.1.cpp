//Program to convert temperature from degree Centigrade to Fahrenheit and vice versa

#include<iostream>

using namespace std;

int main(){
    float t1,t2;
    char temp;
    cout<<"Is the input temperature in Centigrade or Fahrenheit (C/F) : ";
    cin>>temp;
    if(temp=='C' || temp=='F'){
    cout<<"Enter the temperature : ";
    cin>>t1;
    if(temp=='C'){
        t2 = t1*9/5+32;
        cout<<"The temperature in Fahrenheit is "<<t2<<"\n";
    }else{
        t2 = (t1-32)*5/9;
        cout<<"The temperature in Centigrade is "<<t2<<"\n";
    }}
    return 0;
}
