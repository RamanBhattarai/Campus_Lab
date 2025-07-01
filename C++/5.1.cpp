#include<iostream>

using namespace std;

class Complex{
    const float real = 5.5;
    float imag = 1.33 ;
    public:
    float display_real() const{
        return real;
    }
    float display_imag(){
        return imag;
    }
};

int main(){
    Complex b;
    cout<<"Real value: "<<b.display_real()<<endl;
    cout<<"Imaginary value: "<<b.display_imag()<<endl;
    return 0;
}