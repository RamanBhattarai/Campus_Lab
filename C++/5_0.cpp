#include<iostream>
using namespace std;

class Complex{
    const int real; //constant value cannot be modified during runtime
    int imag;

public:
    int getReal () const{
        return real;
    }

    int getImag(){
        cout<<"Enter Imaginary part: ";
        cin>>imag;
        return imag;
    }

    void displayNum () const{
        cout<<"Num: "<<real<<"+"<<imag<<"i"<<endl;
    }

    Complex() : real(9){} //initializing constant memeber using constructor
};

int main(){
    Complex c;
    c.getReal();
    c.getImag();
    c.displayNum();
    return 0;
}