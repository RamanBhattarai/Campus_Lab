/*Define a class Complex with members real and imag. Use constructor to construct the
objects of the class Complex. Using friend function calculate the magnitude of the Complex
number.*/
#include<iostream>
#include<math.h>
using namespace std;

class Complex{
    float real, imag;
public:
    void getReal(){
        cout<<"Enter real number: ";
        cin>>real;
    }

    void getImag(){
        cout<<"Enter imaginary number: ";
        cin>>imag;
    }

    void display(){
        cout<<"Complex number: "<<real<<"+"<<imag<<"i"<<endl;
    }

    friend void calcMag(Complex c);

    Complex(){
        real = 45;
        imag = 67;
    }

    Complex(float r, float i){
        real = r;
        imag = i;
    }

};

void calcMag(Complex c){
    float mag;
    mag = sqrt(c.real * c.real + c.imag * c.imag);
    cout<<"Magnitude of complex number: "<<c.real<<"+"<<c.imag<<"="<<mag<<endl;
}

int main(){
    Complex c;
    c.getReal();
    c.getImag();
    calcMag(c);
    Complex c1(4,8);
    calcMag(c1);
}