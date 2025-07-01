#include<iostream>

#define PI 3.1416

using namespace std;

int area(int a=10){
    int ar = 6 * a * a;
    return ar;
}

float area(float r){
    float ar = PI * r * r;
    return ar;
}

float area(float l, float b){
    float ar = l * b;
    return ar;
}

int main(){
    int cube;
    float r, l, b, circle, rectangle;
    cout<<"Enter the radius of circle ";
    cin>>r;
    cout<<"Enter the length of rectangle ";
    cin>>l;
    cout<<"Enter the breadth of rectangle ";
    cin>>b;
    cube = area();
    circle = area(r);
    rectangle = area(l, b);
    cout<<"The area of cube is "<<cube<<endl;
    cout<<"Area of circle is "<<circle<<endl;
    cout<<"Area of rectangle is "<<rectangle<<endl;
    return 0;
}
