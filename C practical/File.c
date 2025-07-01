/************************************************************************
    filename    : File.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/07/28
    description : This program creates a new text file "DataFile.txt" on the path "E:\\DataFile.txt".
                  It then stores the name, age, roll and grade of student on the text file.
************************************************************************/




#include<stdio.h>

int main(){
	FILE *ptr;          //creates pointer to point the file
	int roll,grade,age;
	char name[20];
	printf("Write the name of student:");
	scanf("%[^\n]s",name);
	printf("Enter the roll no. of student:");
	scanf("%i",&roll);
	printf("Enter the grade of student:");
	scanf("%i",&grade);
	printf("Enter the age of student:");
	scanf("%i",&age);
	ptr=fopen("E:\\DataFile.txt","w");      //creates a new text file name "DataFile.txt" on E: drive

	fprintf(ptr,"The name of student is %s.\n",name);       //stores name of student on Datafile.txt
	fprintf(ptr,"The age of student is %i.\n",age);         //stores age of student on Datafile.txt
	fprintf(ptr,"The grade of student is %i.\n",grade);     //stores grade of student on Datafile.txt
	fprintf(ptr,"The roll no of student is %i.\n",roll);    //stores roll no. of student on Datafile.txt
	fclose(ptr);                               //closes the text file

    return 0;
}
