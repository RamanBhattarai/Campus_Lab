#include <stdio.h>

int main(){
    float x[30],y[30],xp,yp,P;
    int i,n,j,L=1;

    printf("\n\t\t\tLagrange's Interpolation\n");
    printf("\n\tEnter value of number of data points: ");
    scanf("%d",&n);
    printf("\tEnter the respective values of x and y in pair\n");
    for (i=1;i<=n;i++){
        printf("\t");
        scanf("%f %f",&x[i],&y[i]);
    }
    printf("\n\tThe table of data you entered is as follows: \n\tx\t y\n");
    for (i=1;i<=n;i++){
        printf("\t%0.0f \t%0.0f\n",x[i],y[i]);
    }

    while(L==1){
        printf("\tEnter the value of xp: ");
        scanf("%f",&xp);
        yp = 0;
        for (i=1;i<=n;i++){
            P=1;
            for(j=1;j<=n;j++){
                if(i!=j){
                    P *= (xp-x[j])/(x[i]-x[j]);
                }
            }
            yp += P*y[i];
        }
        printf("\n\tThe value of yp(x) at xp = %0.4f is yp(x) = %0.4f\n",xp,yp);
        printf("\n\t Do you want to continue Press 1 for yes otherwise any key\n");
        scanf("%d",&L);
    }
    return 0;
}
