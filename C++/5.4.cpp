#include<iostream>

using namespace std;

class Complex{
    float real;
    float imag;
    static int count;
    public:
    static void counter(){
        count += 1;
    }
    Complex(){
        real = 0;
        imag = 0;
        cout<<real<<"+"<<imag<<"i"<<endl;
        counter();
    }
    Complex(float a, float b){
        real = a;
        imag = b;
        cout<<real<<"+"<<imag<<"i"<<endl;
        counter();
    }
    void dispaly_count(){
        cout<<endl<<"Total number of Complex number = "<<count<<endl;
    }
};

int Complex::count = 0;

int main(){
    Complex();
    Complex t1(3.33,5.5);
    Complex t2(0,2.1);
    t1.dispaly_count();
    return 0;
}
