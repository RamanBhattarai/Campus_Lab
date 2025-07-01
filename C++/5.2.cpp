#include<iostream>

using namespace std;

class Complex{
    const float real = 2.33;
    float imag = 10;
    public:
    float display_real() const{
        return real;
    }
    float display_imag() const{
        return imag;
    }
};

int main(){
    const Complex b;
    cout<<"Real: "<<b.display_real()<<endl;
    cout<<"Imaginary: "<<b.display_imag()<<endl;
    return 0;
}