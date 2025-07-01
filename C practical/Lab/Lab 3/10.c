#include<stdio.h>

float fact(int a){
	if (a==1){
		return 1;
	}else{
		return (a*fact(a-1));
	}
}

int main(){
	int n,r,a;
	float fact1,fact2,ans1,ans2;
	printf("Enter a integer number:");
	scanf("%i",&n);
	a=fact(n);
	printf("The factorial of %i = %i\n",n,a);
	printf("\nEnter an integer to calculate permutation and combination among %i numbers:",n);
	scanf("%i",&r);
	fact1=fact(n-r);
	fact2=fact(r);
	ans1=a/fact1;
	ans2=ans1/fact2;
	printf("\nThe permutation is %iP%i  = %.03f\n",n,r,ans1);
	printf("The combination is %iC%i  = %.03f\n",n,r,ans2);
	return 0;
}
