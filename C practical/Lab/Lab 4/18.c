#include<stdio.h>
#include<string.h>

int main(){
    char word[12]="UNIVERSITY";
    int len=strlen(word);
    for (int j=2;j<=len;j=j+2){
        for (int k=0;k<j;k++){
            printf("%c",word[k]);
        }
        printf("\n");
        }
    for (int j=len-2;j>0;j=j-2){
        for (int k=0;k<j;k++){
            printf("%c",word[k]);
        }
        printf("\n");
    }
    return 0;
}
