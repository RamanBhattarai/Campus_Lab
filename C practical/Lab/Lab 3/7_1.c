#include<stdio.h>

int main(){
	for (int i=1;i<=4;i++){
		for (int j=1 ;j<2;j++){
			for (int k=1;k<=4-i;k++) printf(" ");
			printf("*");
			for (int l=1;l<=i-1;l++) printf("  ");
			printf("*");
			for (int m=1;m<=4-i;m++) printf(" ");
			for (int n=1;n<=4-i;n++) printf(" ");
			printf("*");
			for (int o=1;o<=i-1;o++) printf("  ");
			printf("*\n");
		}
	}
	return 0;
}
