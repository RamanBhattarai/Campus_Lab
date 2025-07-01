#include<stdio.h>

int main(){
	struct complex{
		int x;
		int y;
	}p[2];
	for (int i=0;i<2;i++){
		printf("Enter the real value of complex number %i : ",i+1);
		scanf("%i",&p[i].x);
		printf("Enter the imaginary value of complex number %i : ",i+1);
		scanf("%i",&p[i].y);
	}
	int sum1=p[0].x+p[1].x;
	int sum2=p[0].y+p[1].y;
	int diff1=p[0].x-p[1].x;
	int diff2=p[0].y-p[1].y;
	if (sum2>0){
		printf("\nThe sum of two complex numbers is %i +%ii.\n",sum1,sum2);
	}else{
		printf("The sum of two complex numbers is %i  %ii.\n",sum1,sum2);
	}
	if (diff2>0){
		printf("The difference of two complex numbers is %i +%ii.\n",diff1,diff2);
	}else{
		printf("The difference of two complex numbers is %i %ii.\n",diff1,diff2);
	}
	return 0;
}
