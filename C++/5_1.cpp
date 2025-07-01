#include<iostream>
using namespace std;

class Complex{
    const int real; //constant value cannot be modified during runtime
    int imag;

public:
    int getReal () const{
        return real;
    }

    int getImag() const{
        return imag;
    }

    void displayNum () const{
        cout<<"Num: "<<real<<"+"<<imag<<"i"<<endl;
    }

    Complex() : real(9), imag(10){} //initializing memebers using constructor
};

int main(){
    const Complex c;
    c.getReal(); //only constant members can be accessed by constant object
    c.getImag(); 
    c.displayNum();
    return 0;
}