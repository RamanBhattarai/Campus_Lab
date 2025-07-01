#include<iostream>
using namespace std;

class Matrix{
    int a,b,c,d;
    public:
    Matrix(){
        a=0,b=0,c=0,d=0;
    }
    Matrix(int a,int b,int c,int d){
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
    }
    Matrix(int s){
        a = s*0;
        b = s*1;
        c = s*3;
        d = s*2;
    }
    Matrix operator*(Matrix);
    void display(){
        cout<<a<<"\t"<<b<<endl;
        cout<<c<<"\t"<<d<<endl;
    }
};

Matrix Matrix::operator*(Matrix m){
    Matrix temp;
    temp.a=this->a*m.a+this->c*m.b;
    temp.b=this->b*m.a+this->d*m.b;
    temp.c=this->a*m.c+this->c*m.d;
    temp.d=this->b*m.c+this->d*m.d;
    return temp;
}

int main(){
    int a,b,c,d;
    Matrix M1(1);
    cout<<"Enter the elements of a Matrix: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    Matrix M2(a,b,c,d);
    Matrix M3;
    M3 = M2*M1;    //in this problem M2 * M1 gives M1 * M2 value
    cout<<"Matrix M1:"<<endl;
    M1.display();
    cout<<"Matrix M2:"<<endl;
    M2.display();
    cout<<"Multiplication of two matrices M1*M2 is:"<<endl;
    cout<<"Matrix M3:"<<endl;
    M3.display();
    return 0;
}
