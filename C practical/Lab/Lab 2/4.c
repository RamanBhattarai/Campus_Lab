#include<stdio.h>

int main(){
    float physics, math, chemistry, english, biology, total, percentage;
    printf("Enter the marks in Physics:");
    scanf("%f",&physics);
    printf("Enter the marks in Chemistry:");
    scanf("%f",&chemistry);
    printf("Enter the marks in English:");
    scanf("%f",&english);
    printf("Enter the marks in Biology:");
    scanf("%f",&biology);
    printf("Enter the marks in Math:");
    scanf("%f",&math);
    total = physics+ math+ chemistry+ english+ biology;
    percentage = total / 5;
    printf("\n\nYour marks in Physics is: %.02f\n",physics);
    printf("Your marks in Chemistry is: %.02f\n",chemistry);
    printf("Your marks in Math is: %.02f\n",math);
    printf("Your marks in English is: %.02f\n",english);
    printf("Your marks in Biology is: %.02f\n",biology);
    printf("\nThe total marks is: %.02f\n",total);
    printf("\nThe percentage is: %.02f\n",percentage);
    if (percentage<40){
        printf("You Fail.\n");
    } else if (percentage<55) {
        printf("Third division.\n");
    } else if (percentage<65) {
        printf("Second Division.\n");
    } else if (percentage<80) {
        printf("First Division.\n");
    } else if (percentage<95) {
        printf("Distinction.\n");
    } else if (percentage<100) {
        printf("Extra ordinary.\n");
    } else {
        printf("Error in marking.\n");
    }
    return 0;
}
