#include<stdio.h>

int main(){
    int a[3],n;
    int *p=a;
    printf("Enter three numbers: ");
    scanf("%i %i %i",p,p+1,p+2);
    if ((*p>*(p+1)) && (*p>*(p+2))){
        printf("%i is greatest.\n",*p);
    }else if((*(p+1)>*p) && (*(p+1)>*(p+2))){
        printf("%i is greatest.\n",*(p+1));
    }else{
        printf("%i is greatest.\n",*(p+2));
    }
    return 0;
}
