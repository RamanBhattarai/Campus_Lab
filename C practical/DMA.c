//Following codes are executed in code::blocks IDE

#include <stdio.h>
#include <stdlib.h>

int main(){
int *ptr1,*ptr2;
int n=5;

printf("The number of elementd is %i.\n",n);

ptr1=(int*)malloc(n*sizeof(int));
ptr2=(int*)calloc(n,sizeof(int));

if (ptr1==NULL || ptr2==NULL){
printf("\nMemory is not allocated.\n");
exit(0);
} else {
printf("\nMemory is allocated using malloc and calloc.\n");

for (int i=0;i<n;i++){
ptr1[i]=i+1;
ptr2[i]=i+10;
}

printf("\nThe elements of array are: \n");
printf("From malloc\t From calloc\n");
for (int i=0;i<n;i++){
printf("%i\t\t %i\n",ptr1[i],ptr2[i]);
}

free(ptr1);
printf("\nMalloc memory of first array is freed.\n");

n=10;
printf("\nSize of second array is increased by 5.\n");
ptr2=realloc(ptr2,n*sizeof(int));
printf("\nCalloc memory is re-allocated using realloc.\n");

for (int i=5;i<n;i++){
ptr2[i]=i+10;
}

printf("\nThe elements of array are: \n");
printf("From calloc\n");
for (int i=0;i<n;i++){
printf("%i\n",ptr2[i]);
}}
return 0;
}
