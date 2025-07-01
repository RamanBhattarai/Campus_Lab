#include<stdio.h>

struct student{
	int roll;
	char name[20];
	char address[15];
	int age;
	float average;
}s[12];

void input(struct student a[12]){
	for (int i=0;i<12;i++){
        fseek(stdin,0,SEEK_END);
		printf("Enter the name of student %i : ",i+1);
		gets(a[i].name);
		fseek(stdin,0,SEEK_END);
		printf("Enter the address of student %i : ",i+1);
		scanf("%s",a[i].address);
		fseek(stdin,0,SEEK_END);
		printf("Enter the age of student %i : ",i+1);
		scanf("%i",&a[i].age);
		printf("Enter the roll no. of student %i : ",i+1);
		scanf("%i",&a[i].roll);
		printf("Enter the average marks of student %i : ",i+1);
		scanf("%f",&a[i].average);
	}
	display(a);
}

void display(struct student a[12]){
	printf("Std. no.  Name \t\t Address \t Roll no.    Age        Average\n");
	for (int i=0;i<12;i++){
	printf("%i \t %s \t %s \t %i \t %i \t %f\n",i+1,a[i].name,a[i].address,a[i].roll,a[i].age,a[i].average);
	}
}

int main(){
	input(s);
	return 0;
}
