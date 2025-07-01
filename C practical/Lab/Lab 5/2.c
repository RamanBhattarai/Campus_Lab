#include<stdio.h>

struct student{
char name[25];
char address[15];
int age;
int physics;
int C;
int math;
int roll;
};

int main(){
    FILE *ptr;
    struct student s[3];
    float avg[3];
    for (int i=0;i<3;i++){
        fseek(stdin,0,SEEK_END);
        printf("Enter the name of student %i : ",i+1);
        gets(s[i].name);
        fseek(stdin,0,SEEK_END);
        printf("Enter the address of student %i : ",i+1);
        gets(s[i].address);
        fseek(stdin,0,SEEK_END);
        printf("Enter the roll no. of student %i : ",i+1);
        scanf("%i",&s[i].roll);
        printf("Enter the age of student %i : ",i+1);
        scanf("%i",&s[i].age);
        printf("Enter the mark in physics of student %i : ",i+1);
        scanf("%i",&s[i].physics);
        printf("Enter the mark in C subject of student %i : ",i+1);
        scanf("%i",&s[i].C);
        printf("Enter the mark in math of student %i : ",i+1);
        scanf("%i",&s[i].math);
        avg[i]=(s[i].physics+s[i].C+s[i].math)/3;
    }

    ptr=fopen("D:\\std.txt","w");
    for (int i=0;i<3;i++){
        fprintf(ptr,"The roll no. of student %i is %i.\n",i+1,s[i].roll);
        fprintf(ptr,"The name of student %i is %s.\n",i+1,s[i].name);
        fprintf(ptr,"The address of student %i is %s.\n",i+1,s[i].address);
        fprintf(ptr,"The age of student %i is %i.\n",i+1,s[i].age);
        fprintf(ptr,"The marks of student %i in physics is %i.\n",i+1,s[i].physics);
        fprintf(ptr,"The marks of student %i in C subject is %i.\n",i+1,s[i].C);
        fprintf(ptr,"The marks of student %i in math is %i.\n",i+1,s[i].math);
        fprintf(ptr,"The average marks is %.02f.\n\n",avg[i]);
    }
    fclose(ptr);

    FILE *fptr;
    char c;
    fptr=fopen("D:\\std.txt","r");
    if(fptr==NULL){
        printf("FILE IS NOT AVAILABLE. CREATE FILE.");
        exit(0);
    }
    while((c=fgetc(fptr))!=EOF){
        printf("%c",c);
    }
    fclose(fptr);
    return 0;
}
