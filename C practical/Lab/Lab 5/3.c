#include<stdio.h>

int main(){
    struct company{
        char name[20];
        char address[15];
        char phone[12];
        int noOfEmployee;
    }company1;
    printf("Enter the name of company : ");
    gets(company1.name);
    fseek(stdin,0,SEEK_END);
    printf("Enter the address :");
    scanf("%s",company1.address);
    printf("Enter the phone number :");
    scanf("%s",company1.phone);
    printf("Enter the number of employees :");
    scanf("%i",&company1.noOfEmployee);
    fseek(stdin,0,SEEK_END);
    system("cls");
    printf("The name of company is %s.\n",company1.name);
    printf("The address of company is %s.\n",company1.address);
    printf("The phone of company is %s.\n",company1.phone);
    printf("The number of employees in the company is %i.\n",company1.noOfEmployee);
    return 0;
}
