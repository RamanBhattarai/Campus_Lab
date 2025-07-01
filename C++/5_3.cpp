/*Define a class Complex with members real and imag. Use constructor to construct the
objects of the class Complex. Using static data member and static function, display the total
number of object created before terminating the program.*/

#include<iostream>
using namespace std;

class Complex{
    int real, imag;
    static int total;
public:
    
    void getReal(){
        cout<<"Enter real number: "<<endl;
        cin>>real;
    }

    void getImag(){
        cout<<"Enter imaginary number: "<<endl;
        cin>>imag;
    }

    void display(){
        cout<<"Complex number: "<<real<<"+"<<imag<<"i"<<endl;
    }

    Complex(){
        real = 0;
        imag = 0;
    };

    static void objCounter(){
        total++;
        //cout<<"Object count: "<<total<<endl;
    }

    void getcount(){
        cout<<"Total objs: "<<total<<endl;
    }
};

int Complex::total = 0;

int main(){
    Complex c;
    c.getReal();
    c.getImag();
    c.display();
    c.objCounter();
    Complex c1;
    c1.getReal();
    c1.getImag();
    c1.display();
    c1.objCounter();
    Complex c2;
    c2.getReal();
    c2.getImag();
    c2.display();
    c2.objCounter();
    Complex c3;
    c3.getReal();
    c3.getImag();
    c3.display();
    c3.objCounter();
    c3.getcount();
    return 0;
}