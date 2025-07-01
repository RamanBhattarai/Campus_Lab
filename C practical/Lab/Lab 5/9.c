#include<stdio.h>

union student{
	char name[20];
	int age;
    int roll;
}s;


int main(){
	printf("Enter the name of student : ");
	gets(s.name);
    fseek(stdin,0,SEEK_END);
    printf("Enter the age of student : ");
    scanf("%i",&s.age);
    printf("Enter the roll no. of student : ");
    scanf("%i",&s.roll);

    printf("\nThe name of student is %s.\n",s.name);
    printf("\nThe age of student is %i.\n",s.age);
    printf("\nThe roll no. of student is %i.\n",s.roll);
	return 0;
}
