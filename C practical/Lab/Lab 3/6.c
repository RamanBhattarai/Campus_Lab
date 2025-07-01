#include<stdio.h>

int main(){
	for (int i=1;i<5;i++){
		for(int j=1;j<=i;j++){
			printf("x");
		}
	printf("\n");
	}
	for (int i=1;i<10;i+=2){
		for(int j=1;j<=i;j++){
			printf("x");
		}
	printf("\n");
	}
	return 0;
}
