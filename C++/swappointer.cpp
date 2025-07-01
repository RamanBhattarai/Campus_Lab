#include<iostream>

using namespace std;

void swap(int *,int *);
int getnum();

int main(){
    int num1=getnum();
    int num2=getnum();
    cout<<"Values before swap: "<<num1<<", "<<num2<<endl;
    swap(&num1, &num2);
    cout<<"Values after swap: "<<num1<<", "<<num2<<endl;
    return 0;
}

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int getnum(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    return num;
}