/************************************************************************
    filename    : pointerstructure.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/07/26
    description : This program creates structure 'student' to store the name and age of student, array to store data of 10
                  students and pointer to point the structure array 'student'. It then asks the input for name and age for
                  10 students from the user. Then it prints the info of students on output screen like
                  "            Name       Age
                   Student 1   Ram        20
                   Student 2   Hari       19" using formatted output.
************************************************************************/



#include<stdio.h>

struct student{             //declares structure student
    char name[15];
    int age;
};

int main(){
    struct student s[10],*p;        //defines array and pointer
    p=s;                            //pointer points structure array s
    for (int i=0;i<10;i++){
        printf("Enter the name and age of student %i:\n",i+1);
        scanf("%s",p->name);        //asks name input from user
        scanf("%i",&p->age);        //asks age input from user
        p++;
    }
    p=s;
    printf("\t\t Name \t \tAge\n");
    for (int i=0;i<10;i++){
    printf("Student %i\t %s\t\t %i\n",i+1,(p+i)->name,(p+i)->age);      //displays name and age of students
    }
}
