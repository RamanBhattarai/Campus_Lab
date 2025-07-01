#include<stdio.h>

float fact(int a){
    if (a==1){
        return 1;
    }else {
        return (a*fact(a-1));
    }
}

int prime(int a){
    int c=0;
    for (int i=1;i<=a;i++){
        if (a%i==0){
            c+=1;
        }
    }
    if (c==2){
        return a;
    }else {
        return 0;
    }
}


int main(){
    float y=1.00;
    for (int i=0;i<=10;i++){
        float f=0,sum=0;
        int num=0;
        num=prime(i);
        if (num!=i){
            f=fact(i);
            sum=i*i/f;
        }
        y+=sum;
    }
    printf("The sum in equation without prime number is : %f\n",y);
    return 0;
}
