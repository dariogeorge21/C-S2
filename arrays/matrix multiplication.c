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

/* Sample Output:
Enter the number of rows for first matrix: 2
Enter the number of columns for first matrix: 3
Enter the number of rows for second matrix: 3
Enter the number of columns for second matrix: 2

Enter elements of first matrix:
Enter element [0][0]: 1
Enter element [0][1]: 2
Enter element [0][2]: 3
Enter element [1][0]: 4
Enter element [1][1]: 5
Enter element [1][2]: 6

Enter elements of second matrix:
Enter element [0][0]: 7
Enter element [0][1]: 8
Enter element [1][0]: 9
Enter element [1][1]: 10
Enter element [2][0]: 11
Enter element [2][1]: 12

Result of matrix multiplication:
58 64
139 154

Note: Matrix multiplication is possible only when number of columns in first matrix
equals number of rows in second matrix.
*/