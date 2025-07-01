#include<stdio.h>

int main(){
    FILE *ptr;
    char s[40];
    printf("Writing in the file.\n");
    ptr = fopen("D:\\stringc.txt","w");
    gets(s);
    fseek(stdin,0,SEEK_END);
    fputs(s,ptr);
    fclose(ptr);

    FILE *fptr;
    fptr = fopen("D:\\stringc.txt","r");
    printf("\nReading the file.\n");
    fgets(s,40,fptr);
    puts(s);
    fclose(fptr);
    return 0;
}
