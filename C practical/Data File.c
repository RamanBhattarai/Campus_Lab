#include<stdio.h>

int main(){
    FILE *fptr;
    char c;
    fptr = fopen("C:","r");

    if(fptr==NULL){
            printf("FILE CANNNOT BE CREATED\n");
            exit(0);
    }
    while((c=fgetc(fptr))!=EOF){
        printf("%c",c);
    }
    fclose(fptr);
}
