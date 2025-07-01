#include<stdio.h>

int main(){
	int a,b;
	int sum1=0,sum2=0,sum=0;
	printf("Enter two integer numbers:");
	scanf("%i %i",&a,&b);
	for (int i=1;i<=a;i++){
		if (i%2==0){
			sum1+=i;
		}
	}
	for (int i=1;i<=b;i++){
		if (i%2==0){
			sum2+=i;
		}
	}
	sum= sum1+sum2;
	printf("The sum of even numbers between two integer numbers is :%i\n",sum);
}
