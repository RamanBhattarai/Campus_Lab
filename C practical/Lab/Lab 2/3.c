#include<stdio.h>

int main(){
    char name[15] ="Name goes here";
    char address[15] ="Address here";
    char age[4];
    char weight[4];
    char height[4];
    printf("Enter your name:");
    gets(name);
    fseek(stdin,0,SEEK_END);
    printf("Enter your address:");
    gets(address);
    fseek(stdin,0,SEEK_END);
    printf("Enter your weight:");
    gets(weight);
    fseek(stdin,0,SEEK_END);
    printf("Enter your age:");
    gets(age);
    fseek(stdin,0,SEEK_END);
    printf("Enter your height:");
    gets(height);
    fseek(stdin,0,SEEK_END);
    puts(name);
    puts(address);
    puts(age);
    puts(weight);
    puts(height);
    return 0;
}
