#include<stdio.h>

int main(){
    char a[50]="Enter a sentence here.";
    char b[50];
    printf("Enter a sentence here.\n");
    gets(a);
    fseek(stdin,0,SEEK_END);
    int length=strlen(a);
    int i=0,j=0;
    while (i<length){
        if (a[i]!=' '){
            if (a[i]=='.'){
                b[j]=':';
            }else{
                b[j]=a[i];
            }
            j++;
        }
        i++;
    }
    printf("\nThe sentence is:\n");
    printf("%s\n",a);
    printf("\nAfter changing:");
    printf("\n%s\n",b);
    return 0;
}
