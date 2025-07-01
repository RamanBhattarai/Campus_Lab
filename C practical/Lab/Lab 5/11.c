#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("D:\\filec.txt","r");
    char c;
    int a=0;
    if (ptr==NULL){
        printf("FILE DOESN'T EXISTS. FIRST CREATE FILE.");
        exit(0);
    }
    while ((c=fgetc(ptr))!=EOF){
        printf("%c",c);
        if (c!=' ' && c!='.'){
            a+=1;
        }
    }
    printf("\nThe number of characters is %i.\n",a);
    fclose(ptr);
    return 0;
}
