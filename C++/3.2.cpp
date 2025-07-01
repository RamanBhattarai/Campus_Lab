#include<iostream>

using namespace std;

int *roll = new int;
char *name = new char[15];

void scanRollandName(){
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your roll number: ";
    cin>>*roll;
}

void freeMemory(){
    delete roll;
    delete [] name;
}

void printRollandName(){
    cout<<endl<<"Name: "<<name;
    cout<<endl<<"Roll no.: "<<*roll;
}

int main(){
    scanRollandName();
    cout<<endl<<"Memory allocated dynamically for name and roll.";
    cout<<endl<<"Value of Name and Roll before Deallocation";
    printRollandName();
    freeMemory();
    cout<<"\n\nAfter Deallocation";
    printRollandName();
    return 0;
}
