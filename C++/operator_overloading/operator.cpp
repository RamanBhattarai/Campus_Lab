//WAP to overload prefix uniary increament operator.

#include<iostream>

using namespace std;

class Plane{
	int x,y,z;
	void setplane(int, int, int);
	void putplane();
	void operator ++();
	// friend void operator++(Plane &);
};

void Plane::setplane(int a,int b,int c){
	x=a; 	y=b; 	z=c;
}

void Plane::putplane(){
	cout<<"(x,y,z) : "<<"("<<x<<","<<y<<","<<z<<")\n";
}

void Plane::operator ++(){
	this->x=++x;
	this->y=++y;
	this->z=++y;
}

/* void operator++(Plane &A){
	A.x=++A.x;
	A.y=++A.y;
	A.z=++A.z;

*/

int main(){
	Plane A;
	A.setplane(1,2,3);
	A.putplane();
	++A;
	A.putplane();
	return 0;
}