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
    friend Matrix operator*(Matrix,Matrix);
    void display(){
        cout<<a<<"\t"<<b<<endl;
        cout<<c<<"\t"<<d<<endl;
    }
};

Matrix operator*(Matrix m,Matrix n){
    Matrix temp;
    temp.a=m.a*n.a+m.b*n.c;
    temp.b=m.a*n.b+m.b*n.d;;
    temp.c=m.c*n.a+m.d*n.c;
    temp.d=m.c*n.b+m.d*n.d;
    return temp;
}

int main(){
    int a,b,c,d;
    Matrix M1(2);
    cout<<"Enter the elements of a Matrix: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    Matrix M2(a,b,c,d);
    Matrix M3;
    M3 = M1*M2;
    cout<<"Matrix M1:"<<endl;
    M1.display();
    cout<<"Matrix M2:"<<endl;
    M2.display();
    cout<<"Matrix M3:"<<endl;
    M3.display();
    return 0;
}
