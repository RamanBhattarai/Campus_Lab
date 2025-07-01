#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n, i, j, k;
    float a[30][30], x[30], Ratio, sum = 0;
 
    // Input section
    printf("\t\t\tGauss Elimination Method For the system of linear equations\n");
    printf("Enter the number of unknowns: ");
    scanf("%d", &n);
    printf("Enter the elements a[i][j] of th augumented matrix of the coefficient matrix\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 1; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
 
    // Apply gauss elimination method to the augumented matrix
    for (i = 1; i <= n - 1; i++)
    {
        if (a[i][i] == 0)
        {
            printf("\nMathematical Error!!");
            exit(0);
        }
    }
 
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= n; i++)
        {
            if (i > j)
            {
                Ratio = a[i][j] / a[j][j];
                for (k = 1; k <= n + 1; k++)
                {
                    a[i][k] -= Ratio * a[j][k];
                }
            }
        }
    }
 
    // Obtain solution by backward substitution
    if (a[n][n] == 0 && a[n][n + 1] != 0)
    {
        printf("\nThe system is inconsistent and the solution doesnt exist.");
        exit(0);
    }
    else if (a[n][n] == 0 && a[n][n + 1] == 0)
    {
        printf("\nThe system is consistent and the system has infinite solution.");
        exit(0);
    }
 
    x[n] = a[n][n + 1] / a[n][n];
 
    for (i = n; i >= 1; i--)
    {
        sum = 0;
        for (j = i + 1; j <= n; j++)
        {
            sum += a[i][j] * x[j];
        }
        x[i] = (a[i][n + 1] - sum) / a[i][i];
    }
 
    // Display roots:
    printf("\n\t\t\t\t\t\t\tThe solution/roots are: ");
    for (i = 1; i <= n; i++)
    {
        printf("\n\t\t\t\t\t\t\t\tx[%d] : %f", i, x[i]);
    }
 
    return 0;
}