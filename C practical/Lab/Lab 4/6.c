#include<stdio.h>

void input(int a[][2]){
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            scanf("%i",&a[i][j]);
        }
    }
}

void display(int a[][2]){
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            printf("%i\t",a[i][j]);
        }
        printf("\n");
    }
}

void add(int a[][2],int b[][2]){
    int c[3][2];
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    display(&c);
}

int main(){
    int a[3][2],b[3][2];
    printf("Enter elements of first matrix\n");
    input(&a);
    printf("Enter elements of second matrix\n");
    input(&b);
    printf("First matrix\n");
    display(&a);
    printf("Second matrix\n");
    display(&b);
    printf("Result of matrix addition\n");
    add(&a,&b);
    return 0;
}
