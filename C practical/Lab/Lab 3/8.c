#include<stdio.h>

int sum(int a,int b){
	return (a+b);
}

int diff(int a,int b){
	return (a-b);
}

int mult(int a,int b){
	return (a*b);
}

int div(int a,int b){
	return (a/b);
}

int main(){
	int a,b,ans;
	printf("Enter two integer value:");
	scanf("%i %i",&a,&b);
	ans=sum(a,b);
	printf("The sum of two number is:%i\n",ans);
	ans=diff(a,b);
	printf("The difference of two number is:%i\n",ans);
	ans=mult(a,b);
	printf("The product of two number is:%i\n",ans);
	ans=div(a,b);
	printf("The division of two number is:%i\n",ans);
	return 0;
}
