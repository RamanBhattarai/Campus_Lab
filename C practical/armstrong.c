/************************************************************************
    filename    : armstrong.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/07/12
    description : This program asks input number from the user. Then it calls function with argument but no return value
                  where it calculates the sum of power of each digit raised to number of terms then checks whether the
                  input number is armstrong or not and prints info on output screen like
                  "540 is not armstrong."using formatted output.
************************************************************************/


#include<stdio.h>

void armstrong(int);

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    armstrong(num);         //calls function
    return 0;
}

void armstrong(int a){
    int b,c,d,e;
    c=a,b=0,d=0;
    while(c>0){     //finds power
    c=c/10;
    d+=1;
    }
    c=a;
    while(c>0){     //calculates sum of power of each digits
        e=1;
        int rep=0;
        while(rep<d){
            e=e*(c%10);
            rep+=1;
        }
        b+=e;
        c/=10;
    }
    if(a==b){printf("%d is armstrong.\n",a);    //checks armstrong
    }else {printf("%d is not armstrong.\n",a);
    }
}
