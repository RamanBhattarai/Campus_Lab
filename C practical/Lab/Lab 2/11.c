#include<stdio.h>

int main(){
    char a='t';
    printf("Enter an alphabet: ");
    scanf("%c",&a);
    printf("\nUsing if-else statement.\n");
    if ((a=='a') || (a=='e') || (a=='i') || (a=='o') || (a=='u')) {
        printf("The alphabet %c is vowel.\n",a);
    } else {
        printf("The alphabet %c is consonant.\n",a);
    }
    printf("\nUsing switch-case statement.\n");
    switch (a){
        case 'a':
            printf("The alphabet %c is vowel.\n",a);
            break;
        case 'e':
            printf("The alphabet %c is vowel.\n",a);
            break;
        case 'i':
            printf("The alphabet %c is vowel.\n",a);
            break;
        case 'o':
            printf("The alphabet %c is vowel.\n",a);
            break;
        case 'u':
            printf("The alphabet %c is vowel.\n",a);
            break;
        default:
            printf("The alphabet %c is consonant.\n",a);
            break;
    }
    return 0;
}
