#include<stdio.h>

void fibo(int a,int b){
	int c=a+b;
	if (c<300){
		printf("%i ",c);
		return fibo(b,c);
	}
}

int main(){
	int i=300;
	printf("1 1 ");
	fibo(1,1);
	printf("\n");
	return 0;
}
