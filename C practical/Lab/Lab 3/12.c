#include<stdio.h>

int a=10;

void var(){
    int b=100;
    static c=1000;
    printf("a=%i \t b= %i \t c=%i\n",a,b,c);
    a++;
    b++;
    c++;
}


int main(){
    printf("Global variable 'a'  Local variable 'b'  Static variable 'c'\n\n");
	var();
	var();
	var();
	a=500;
	var();
	printf("\n");
	return 0;
}
