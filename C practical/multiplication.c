/************************************************************************
    filename    : multiplication.c
    author      : Raman Bhattarai (THA07BEI033)
    created date: 2021/07/19
    description : This program asks order of matrix from the user. If the column of first matrix has same order as of
                  row of second matrix then it asks elements of both matrices. It calls function with argument value but
                  no return value where it displays both matrices on output screen. It again calls function with argument
                  but no return value to calculates the multiplication of two matrices and prints the multiplied matrix on
                  output screen like
                  "38  24  56
                   44  15  101
                   97  75  35  "using formatted output.
************************************************************************/


#include<stdio.h>

void mat(int m[][5],int r,int c){              //function to display matrix
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d\t",m[i][j]);             //displays each elements.
        }printf("\n");
    }
}

void multiply(int m1[][5],int m2[][5],int m[5][5],int r1,int c1,int c2){        //function to multiply matrices.
    int i,j,k;
    for (i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            m[i][j]=0;                              //initialize value to 0 of each element.
        }
    }
    for (i=0;i<r1;i++){
        for (j=0;j<c2;j++){
            for (k=0;k<c1;k++){
                m[i][j] += m1[i][k]*m2[k][j];           //multiplies matrices.
            }
        }
    }
    mat(m,r1,c2);                              //calls function to display multiplied matrix
}

int main(){
    int m1[5][5],m2[5][5],i,j,r1,r2,c1,c2;
    printf("Enter the order of first matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the order of second matrix:\n");
    scanf("%d %d",&r2,&c2);
    if (c1 == r2){                          //checks if the matrices can be multiplied or not.
    printf("Enter the elements of first matrix:\n");
    for (i=0;i<r1;i++){
        for (j=0;j<c1;j++){
            scanf("%d",&m1[i][j]);          //takes input of elements of first matrix.
        }
    }
    printf("Enter the elements of second matrix:\n");
    for (i=0;i<r2;i++){
        for (j=0;j<c2;j++){
            scanf("%d",&m2[i][j]);          //takes input of elements of second matrix.
        }
    }
    int result[5][5];
    printf("\n\nThe first matrix is:\n");
    mat(m1,r1,c1);                              //calls function to display first matrix
    printf("\nThe second matrix is:\n");
    mat(m2,r2,c2);                              //calls function to display second matrix
    printf("\nThe matrix obtained by multiplying two matrix is:\n");
    multiply(m1,m2,result,r1,c1,c2);            //calls function to multiply matrices.
    } else {printf("Matrices cannot be multiplied as row of second matrix is not equal to column of first matrix.");
    }
}
