#include <stdio.h>
#include <stdlib.h>

void InsertionSort (int a[],int n){
    int i,j,hold;
    for(i = 1;i<n;i++){
        hold = a[i];
        for(j = i-1;j>=0;j--){
            if(a[j]>hold){
                a[j+1]=a[j];
                a[j]=hold;
            }
        }
    }
}

int main()
{
    int ary[5],i;
    int len = sizeof(ary)/sizeof(ary[0]);
    printf("\n\t\tInsertion Sort");
    printf("\n\n\tEnter 5 elements\n");
    for(i=0;i<5;i++){
        printf("\n\tElement %d : ",i);
        scanf("%d",&ary[i]);
    }

    printf("\n\tBefore Sorting\n\t");

    for(i=0;i<len;i++)
    {
        printf("%d\t",ary[i]);
    }
    InsertionSort(ary,len);
    printf("\n\n\tAfter Sorting\n\t");
    for(i=0;i<len;i++)
    {
         printf("%d\t",ary[i]);
    }
    printf("\n\n");
    return 0;
}
