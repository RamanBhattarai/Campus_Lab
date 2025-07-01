#include<stdio.h>
#include<string.h>

int main(){
    char *a[50];
    for (int i=0;i<5;i++){
        printf("Enter the string %i ",i+1);
        a[i]=(char*)malloc(50*sizeof(char));
        scanf("%s",a[i]);
    }
    for (int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            int n=strcmp(a[i],a[j]);
            if(n>0){
                char temp[50];
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    printf("After arranging.\n");
    for (int i=0;i<5;i++){
        printf("String%i  = %s\n",i+1,a[i]);
    }
    return 0;
}
