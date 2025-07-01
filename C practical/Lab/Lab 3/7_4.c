#include<stdio.h>

int main(){
	for (int i=1;i<=5;i++){
		int a=i;
		int diff=5;
		for (int j=5;j>=i;j--){
			printf("%i\t",a);
			a+=diff;
			diff--;
		}
		printf("\n");
	}
	return 0;
}
