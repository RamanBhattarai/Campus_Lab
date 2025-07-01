#include<stdio.h>

int main(){
    char a;
    printf("Enter a character type data:  ");
    scanf("%c",&a);
    if (a >= 65 && a<=90){
        printf("\nThe inputted character '%c' is alphabet.\n",a);
        } else if (a >=48 && a<=57) {
        printf("\nThe inputted character '%c' is number.\n",a);
        } else {printf("\nThe inputted character '%c' is special character.\n",a);
    }
    if (isalnum(a)) {printf("\nThe character %c is Alphanumeric.",a);}
    if (isblank(a)) {printf("\nThe character %c is Blank character.",a);}
    if (isalpha(a)) {printf("\nThe character %c is Alphabetic.",a);}
    if (iscntrl(a)) {printf("\nThe character %c is Control character.",a);}
    if (isdigit(a)) {printf("\nThe character %c is Number digit.",a);}
    if (isupper(a)) {printf("\nThe character %c is Upper case.",a);}
    if (islower(a)) {printf("\nThe character %c is Lower case.",a);}
    if (isgraph(a)) {printf("\nThe character %c is Graphical character.",a);}
    return 0;
}
