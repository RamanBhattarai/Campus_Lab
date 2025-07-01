#include<stdio.h>

int main(){
    char a[10];
    char b[10];
    int length=0,loop;
    printf("Enter a string\n");
    scanf("%s",a);
    while (a[length]!=0){
        length++;
    }
    for (int i=0;i<=length;i++){
        b[length-i-1]=a[i];
    }
    for (int i=0;i<=length;i++){
        if (b[i]!=a[i]){
            loop=1;
            break;
        }
    }
    if (loop==1){
            printf("\n%s is not pallindrome\n",a);
    }else{
        printf("\n%s is pallindrome\n",a);
    }
    return 0;
}
