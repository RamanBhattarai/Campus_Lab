#include<stdio.h>

void mat(int a[][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%i",&a[i][j]);
        }
    }
}

void display(int a[][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%i\t",a[i][j]);
        }
        printf("\n");
    }
}

void multiply(int a[][3],int b[][3]){
    int c[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            c[i][j]=0;
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            int sum=0;
            for (int k=0;k<3;k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
    display(&c);
}

int main(){
    int a[3][3],b[3][3];
    printf("Enter the elements of first matrix.\n");
    mat(&a);
    printf("Enter the elements of second matrix.\n");
    mat(&b);
    printf("The first matrix is\n");
    display(&a);
    printf("The second matrix is\n");
    display(&b);
    printf("The result of matrix multiplication is\n");
    multiply(&a,&b);
    return 0;
}
