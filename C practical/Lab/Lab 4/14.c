#include<stdio.h>
#include<string.h>

int main(){
    char a[20],b[20];
    printf("Using string handling function.\n");
    printf("\nEnter a string.\n");
    printf("a = ");
    scanf("%s",a);
    strcpy(b,a);
    printf("After copying string.\n");
    printf("b = %s",b);

    char c[20],d[20];
    printf("\n\nWithout using string handling function.\n");
    printf("\nEnter a string.\n");
    printf("c = ");
    scanf("%s",c);
    int length=0;
    while (c[length]!=0){
        length++;
    }
    for (int i=0;i<=length+1;i++){
        d[i]=c[i];
    }
    printf("After copying string.\n");
    printf("d = %s\n",d);
    return 0;
}
