#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r-l)/2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }

    return -1;
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[20],n,i;
    printf("\n\t\tMerge sort and Binary Search");
    printf("\n\n\tEnter the size of array: ");
    scanf("%d",&n);
    printf("\n\tEnter the array elements: ");
    for(i=0;i<n;++i)
        scanf("%d",&arr[i]);
    printf("\n\n\tBefore Sorting \n\t");
    for (i=0; i < n; i++)
        printf("%d\t", arr[i]);

    mergeSort(arr, 0, n - 1);

    printf("\n\n\tAfter Sorting \n\t");
    for (i=0; i < n; i++)
        printf("%d\t", arr[i]);
    int x;
    printf("\n\n\tElement to search for : ");
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n-1, x);
    if(result == -1)
        printf("\n\tElement is not present in array");
    else
        printf("\n\tElement is present at index %d", result);
    return 0;
}
