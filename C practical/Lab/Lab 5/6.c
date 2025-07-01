#include<stdio.h>

typedef struct company{
	char name[20];
	char address[15];
	char phone[12];
	int noOfEmployee;
} com;

void input(com *a){
	printf("Enter the name of company : ");
    gets(a->name);
    fseek(stdin,0,SEEK_END);
    printf("Enter the address : ");
    scanf("%s",a->address);
    printf("Enter the phone number : ");
    scanf("%s",a->phone);
    printf("Enter the number of employees : ");
    scanf("%i",&a->noOfEmployee);
    fseek(stdin,0,SEEK_END);
    display(a);
}

void display(com *a){
    printf("\nThe name of company is %s.\n",a->name);
    printf("The address of company is %s.\n",a->address);
    printf("The phone of company is %s.\n",a->phone);
    printf("The number of employees in the company is %i.\n\n",a->noOfEmployee);
}

int main(){
	com a;
	input(&a);
	return 0;
}
