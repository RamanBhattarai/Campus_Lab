#include<iostream>
#include<math.h>
using namespace std;

class Complex{
    float real,imag;
    public:
    Complex(){
        real = 6;
        imag = 8;
        display();
    }
    Complex(float a, float b){
        real = a;
        imag = b;
        display();
    }
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    friend void mag(Complex);
};

void mag(Complex A){
    float mag;
    mag = pow(pow(A.real,2)+pow(A.imag,2),0.5);
    cout<<"The magnitude of complex number "<<A.real<<"+"<<A.imag<<"i"<<" is = "<<mag<<endl;
}

int main(){
    Complex C1;
    mag(C1);
    Complex C2(50.2,1.25);
    mag(C2);
    return 0;
}
