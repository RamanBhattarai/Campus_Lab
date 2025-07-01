#include<stdio.h>

struct student{
	char name[20];
	char address[15];
	int age;
};

struct student std(struct student a){
	printf("Enter the name of student : ");
	gets(a.name);
	fseek(stdin,0,SEEK_END);
	printf("Enter the address of student : ");
	scanf("%s",a.address);
	printf("Enter the age of student : ");
	scanf("%i",&a.age);
	return a;
}

int main(){
	struct student a,b;
	b=std(a);
	printf("\nThe name of student is %s.\n",b.name);
	printf("The address of student is %s.\n",b.address);
	printf("The age of student is %i.\n",b.age);
	return 0;
}
