#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    printf("\n\n\t\tPOWER METHOD\n\n");
    int i,j,n;
    float A[40][40],x[40],z[40],e[40],zmax,emax;
    printf("\n\tEnter the order of matrix: ");
    scanf("%d",&n);
    printf("\n\tEnter matrix elements :\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("\t A[%d][%d]= ", i,j);
            scanf("%f",&A[i][j]);
        }
    }
    printf("\n\tEnter the column vector\n");
    for(i=1; i<=n; i++)
    {
        printf("\tX[%d]= ",i);
        scanf("%f",&x[i]);
    }
    do
    {
        for(i=1; i<=n; i++)
        {
            z[i]=0;
            for(j=1; j<=n; j++)
            {
                z[i]=z[i]+A[i][j]*x[j];
            }
        }
        zmax=fabs(z[1]);
        for(i=2; i<=n; i++)
        {
            if((fabs(z[i]))>zmax)
                zmax=fabs(z[i]);
        }
        for(i=1; i<=n; i++)
        {
            z[i]=z[i]/zmax;
        }
        for(i=1; i<=n; i++)
        {
            e[i]=0;
            e[i]=fabs((fabs(z[i]))-(fabs(x[i])));
        }
        emax=e[1];
        for(i=2; i<=n; i++)
        {
            if(e[i]>emax)
                emax=e[i];
        }
        for(i=1; i<=n; i++)
        {
            x[i]=z[i];
        }
    }
    while(emax>0.001);
    printf("\n \tThe required eigen value is %f",zmax);
    printf("\n\n\tThe required eigen vector is :\n");
    for(i=1; i<=n; i++)
    {
        printf("\t%f",z[i]);
    }
    printf("\n\n");
    return 0;
}
