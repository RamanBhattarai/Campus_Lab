#include<iostream>
using namespace std;

class Design1{
    int code=0,qty=0;
    float price=0;
    public:
        Design1(int a,int b,float c){
            code = a;
            qty = b;
            price = c;
        }
        void display(){
            cout<<"Item code: "<<code<<endl;
            cout<<"Item quantity: "<<qty<<endl;
            cout<<"Item price: "<<price<<endl;
        }
        int getcode(){return code;}
        int getqty(){return qty;}
        float getprice(){return price;}

};

class Design2{
    int code;
    float value;
public:
    Design2(){
        code=0;
        value=0;
    }
    void display(){
        cout<<"Item code: "<<code<<endl;
        cout<<"Item value: "<<value<<endl;
    }
    Design2(Design1 a){
        code = a.getcode();
        value = a.getqty()*a.getprice();
    }
};

int main(){
    Design1 d1(2,100,54.65);
    Design2 d2;
    d2=d1;
    cout<<"Design1: "<<endl;
    d1.display();
    cout<<"Design2: "<<endl;
    d2.display();
    return 0;
}
