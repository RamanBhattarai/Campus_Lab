#include <stdio.h>
#include <math.h>

int main(){
    float x[20], y[20], Y[20], sumx, sumy, sumxy, sumx2, a, b;
    int n, i;
    printf("Enter the number of data: ");
    scanf("%d",&n);
    printf("Enter the value of x and y: \n");
    printf("x  y\n");
    for (i=0;i<n;i++){
        scanf("%f %f",&x[i],&y[i]);
        Y[i] = log(y[i]);
    }
    sumx = 0;
    sumy = 0;
    sumx2 = 0;
    sumxy = 0;
    for (i=0;i<n;i++){
    sumx = sumx + x[i];
    sumy = sumy + Y[i];
    sumxy = sumxy + x[i]*Y[i];
    sumx2 = sumx2 + x[i]*x[i];
    }
    b = (n*sumxy - sumx*sumy)/(n*sumx2 - sumx*sumx);
    a = (sumy - b*sumx)/n;
    a = exp(a);
    printf("\nThe values of a = %.4f  and b = %.4f\n",a,b);
    printf("\nThe best fitted line is:\n\n");
    printf("\t\ty = %.4f e^(%.4fx)\n",a,b);
    return 0;
}

