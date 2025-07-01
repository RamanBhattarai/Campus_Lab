#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k;
    float a[30][30], Ratio;

    // Input section
    printf("\n\t\t\tGauss Jordan Method \n");
    printf("\n\tEnter the number of unknowns: ");
    scanf("%d", &n);
    printf("\n\tEnter the elements a[i][j] of th augumented matrix of the coefficient matrix\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 1; j++)
        {
            printf("\t\ta[%d][%d] : ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    // Apply gauss jordan method to the augumented matrix
    for (i = 1; i <= n; i++)
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
            if (i != j)
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

    printf("\n\t\t\t\tThe solution/roots are :\n");

    for (i = 1; i <= n; i++)
    {
        a[i][i] = a[i][n + 1]/ a[i][i];
        printf("\t\t\t\tx[%d] = %0.4f\n",i,a[i][i]);
    }

    return 0;
}
