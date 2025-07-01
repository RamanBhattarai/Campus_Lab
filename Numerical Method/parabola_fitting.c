#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("\n\tEnter number of data points : ");
    scanf("%d",&n);
    if (n<3){
        printf("\nMathematical Error\nNumber of data points must be greater than 2\n");
        exit(0);
    }
    float mat[30][30],Ratio;
    float x[n], y[n], sumx = 0, sumy = 0, sumx2 = 0, sumxy = 0,sumx3 = 0,sumx4 = 0,sumx2y = 0, a, b, c,Y[n], X[n];
    int i = 0, j = 0, k = 0;
    mat[1][1] = n;
    for (i = 0; i < n; i++ ){
        printf("\tEnter x%d, y%d : ",i+1,i+1);
        scanf("%f%f",&x[i],&y[i]);
        mat[1][2] += x[i];
        mat[1][3] += x[i] * x[i];
        mat[2][1] += x[i];
        mat[2][2] += x[i] * x[i];
        mat[2][3] += x[i] * x[i] * x[i];
        mat[3][1] += x[i] * x[i];
        mat[3][2] += x[i] * x[i] * x[i];
        mat[3][3] += x[i] * x[i] * x[i] * x[i];
        mat[1][4] += y[i];
        mat[2][4] += x[i] * y[i];
        mat[3][4] += x[i] * x[i] * y[i];
    }
    for (i = 1; i <= 3; i++)
    {
        if (mat[i][i] == 0)
        {
            printf("\n\tMathematical Error!!");
            exit(0);
        }
    }
    for (j = 1; j <= 3; j++)
    {
        for (i = 1; i <= 3; i++)
        {
            if (i != j)
            {
                Ratio = mat[i][j] / mat[j][j];
                for (k = 1; k <= 3 + 1; k++)
                {
                    mat[i][k] -= Ratio * mat[j][k];
                }
            }
        }

    }
    // Obtain solution by backward substitution
    if (mat[3][3] == 0 && mat[3][3 + 1] != 0)
    {
        printf("\n\tThe system is inconsistent and the solution doesnt exist.");
        exit(0);
    }
    else if (mat[3][3] == 0 && mat[3][3 + 1] == 0)
    {
        printf("\n\tThe system is consistent and the system has infinite solution.");
        exit(0);
    }

    for (i = 1; i <= n; i++)
    {
        mat[i][i] = mat[i][3 + 1]/ mat[i][i];
    }
    a = mat[1][1];
    b = mat[2][2] ;
    c = mat[3][3];
    printf("\n\ta : %.4f\tb : %.4f\tc : %.4f\n",a,b,c);
    printf("\n\tBest Fitted line is \n\n\ty = %.4f + %.4fx + %.4fx^2",a,b,c);
    return 0;
}
