#include<stdio.h>

int main(){
    float y=1.00;
    for (int i=1;i<=10;i++){
        int c=0;
        float sum=0,fact=1;
        for (int j=1;j<=i;j++){
            if (i%j==0){
                c=c+1;
            }
        }
        if (c!=2){
            for (int k=1;k<=i;k++){
                fact*=k;
            }
            sum=i*i/fact;
        }
        y+=sum;
    }
    printf("The sum of expression without prime numbers is: %f\n",y);
    return 0;
}
