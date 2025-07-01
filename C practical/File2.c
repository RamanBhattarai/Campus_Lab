/************************************************************************
    filename    : File2.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/07/28
    description : This program displays the data stored on the text file "DataFile.txt" on the path "E:\\DataFile.txt".
************************************************************************/




#include<stdio.h>

int main(){
    FILE *fptr;         //creates pointer to point the text file "DataFile.txt"
	char c;
	fptr=fopen("E:\\DataFile.txt","r");     //opens "DataFile.txt" to read data on file
	while ((c=fgetc(fptr)) !=EOF){
		printf("%c",c);                     //prints the the data of the text file on output screen
	}
	fclose(fptr);                           //closes the text file
	return 0;
}
