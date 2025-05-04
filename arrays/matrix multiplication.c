#include<stdio.h>

int main(){
    int row1,column1,row2,column2;
    printf("Enter the number of row in matrix 1: ");
    scanf("%d", &row1);
    printf("Enter the number of column in matrix 1: ");
    scanf("%d", &column1);
    printf("Enter the number of row in matrix 2: ");
    scanf("%d", &row2);
    printf("Enter the number of column in matrix 2: ");
    scanf("%d", &column2);

    if(column1 == row2){
        int matrix1[row1][column1], matrix2[row2][column2], result[row1][column2];
        printf("Enter the elements of matrix 1:\n");
        for(int i = 0; i < row1; i++){
            printf("Enter the elements of row %d:\n ", i+1);
            for(int j = 0; j < column1; j++){
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("Enter the elements of matrix 2:\n");
        for(int i = 0; i < row2; i++){
            printf("Enter the elements of row %d:\n ", i+1);
            for(int j = 0; j < column2; j++){
                scanf("%d", &matrix2[i][j]);
            }
        }

        for(int i = 0; i < row1; i++){
            for(int j = 0; j < column2; j++){
                result[i][j] = 0;
            }
        }

        for(int i = 0; i < row1; i++){
            for(int j=0; j<column2; j++){
                int sum = 0;  
                for(int k = 0; k < column1; k++){
                    sum += matrix1[i][k] * matrix2[k][j]; 
                } 
                result[i][j] = sum;
            }
        }
        printf("The result of matrix multiplication is:\n");
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < column2; j++){
                printf("%d \t", result[i][j]);
            } printf("\n");
        }   
    }
    else{
        printf("Matrix multiplication is not possible\n");
    }
    return 0; 
}

/*
Output:
Enter the number of row in matrix 1: 2
Enter the number of column in matrix 1: 2
Enter the number of row in matrix 2: 2
Enter the number of column in matrix 2: 2
Enter the elements of matrix 1:
Enter the elements of row 1:
 1 2
Enter the elements of row 2:
 3 4
Enter the elements of matrix 2:
Enter the elements of row 1:
 5 6
Enter the elements of row 2:
 7 8
The result of matrix multiplication is:
19      22
43      50
*/