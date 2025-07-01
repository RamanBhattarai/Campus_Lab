#include<stdio.h>

int main(){
	int a,b,hcf=0,lcm=0;
	printf("Enter two integer numbers:");
	scanf("%i %i",&a,&b);
	if (a<b){
		for (int i=1;i<=a;i++){
			if (a%i==0 && b%i==0){
				hcf=i;
			}
		}
	}else{
		for (int i=1;i<=b;i++){
			if (a%i==0 && b%i==0){
				hcf=i;
			}
		}
	}
	lcm=a*b/hcf;
	printf("HCF=%i\n",hcf);
	printf("LCM=%i\n",lcm);
	return 0;
}
