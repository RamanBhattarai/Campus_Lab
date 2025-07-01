#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("D:\\filec.txt","w");
    char c='a';
    while (c!=10){
        c=getchar();
        fprintf(ptr,"%c",c);
    }
    fclose(ptr);
    return 0;
}
