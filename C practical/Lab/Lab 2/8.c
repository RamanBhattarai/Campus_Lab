#include<stdio.h>

int main(){
    char b;
    char c[10];
    printf("This is an example of getch() input. Enter a character type data:");
    b = getch();
    putch(10);
    printf("The character you inputted is: %c\n",b);
    printf("This is an example of getche() input. Enter a character type data:");
    b = getche();
    putch(10);
    printf("The character you inputted is: %c\n",b);
    printf("This is an example of getchar() input. Enter a character type data:");
    b = getchar();
    printf("The character you inputted is: %c\n",b);
    printf("This is an example of scanf() type input. Enter a string type data with space:");
    scanf("%s",c);
    printf("The input name is %s.\n",c);
    fseek(stdin,0,SEEK_END);
    printf("This is an example of gets() type input. Enter a string type data with space:");
    gets(c);
    fseek(stdin,0,SEEK_END);
    printf("The input name is %s.\n",c);
    printf("This is an example of printf() type output.\n");
    printf("Inputted name: %s   Inputted character: %c\n",c,b);
    printf("The following is an example of puts() type output.\n");
    puts(c);
    return 0;
}
