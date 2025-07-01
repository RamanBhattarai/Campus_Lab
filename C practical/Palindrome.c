/************************************************************************
    filename    : palindrome.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/07/12
    description : This program asks input number from the user. Then it calls function with argument but no return value
                  where it checks whether the input number is palindrome or not and prints info on output screen like
                  "155 is not palindrome."using formatted output.
************************************************************************/


#include<stdio.h>

void pallindrome(int a){
    int b,c,d;
    b=a,c=0,d=0;
    while (b>0){        //finds number in reverse order
        c=b%10;
        b=b/10;
        d=d*10+c;
    }
    if (a== d){printf("%d is pallindrome.\n",a);    //checks palindrome
    } else {printf("%d is not palindrome.\n",a);
    }
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    pallindrome(num);
    return 0;
}
