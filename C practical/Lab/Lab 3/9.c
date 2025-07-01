#include<stdio.h>

int sum(int);

int main(){
	int a=50;
	int ans;
	ans = sum(a);
	printf("The sum of first 50 natural numbers is :%i\n",ans);
	return 0;
}

int sum(int a){
	if (a==1){
		return 1;
	}else{
		return (a+sum(a-1));
	}
}
