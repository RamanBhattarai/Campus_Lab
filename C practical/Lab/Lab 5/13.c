#include<stdio.h>

int main(){
    FILE *ptr;
    char name[20];
    int age;
    float height;
    printf("Writing in the file.\n");
    ptr = fopen("D:\\person.txt","w");
    printf("Enter the name :");
    scanf("%[^\n]s",name);
    printf("Enter the age :");
    scanf("%i",&age);
    printf("Enter the height :");
    scanf("%f",&height);
    fprintf(ptr,"The name of the person is %s. ",name);
    fprintf(ptr,"His age is %i. ",age);
    fprintf(ptr,"His height is %.02f.\n",height);
    fclose(ptr);

    FILE *pointer;
    char string[100];
    pointer=fopen("D:\\person.txt","r");
    printf("\nReading the file.\n");
    fscanf(pointer,"%[^\n]s",string);
    printf("%s\n",string);
    fclose(pointer);
    return 0;
}
