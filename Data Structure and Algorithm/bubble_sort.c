#include <stdio.h>

int main()
{
    //int ary[8]={2,6,5,7,3,8,9,4};
    int ary[20],len,i,j;
    printf("Enter the size of array: ");
    scanf("%d",&len);
    printf("Enter the array elements: ");
    for(i=0;i<len;++i)
        scanf("%d",&ary[i]);
    int flag,temp;

    printf("Before Sorting\n");

    for(i=0;i<len;i++)
    {
        printf("%d\t",ary[i]);
    }
    printf("\nAfter Sorting\n");

    for(i=0;i<len-1;i++)
    {
        flag=0;
        for(j=0;j<len-1-i;j++)
        {
            if(ary[j]>ary[j+1])
                {
                    temp=ary[j];
                    ary[j]=ary[j+1];
                    ary[j+1]=temp;
                    flag=1;
                }
        }
        if(flag==0) break;
    }

    for(i=0;i<len;i++)
    {
         printf("%d\t",ary[i]);
    }

    return 0;
}
