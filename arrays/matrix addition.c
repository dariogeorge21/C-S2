#include<stdio.h>

int main(){
    int row, column;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    int arr1[row][column], arr2[row][column], sum[row][column];
    printf("Enter the elements of the first matrix: ");
    for(int i = 0; i < row; i++){
        printf("Enter the elements of row %d: ", i+1);
        for(int j = 0; j < column; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix: ");
    for(int i = 0; i < row; i++){
        printf("Enter the elements of row %d: ", i+1);
        for(int j = 0; j < column; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The sum of the matrices is: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            sum[i][j]=0;
            sum[i][j] += arr1[i][j] + arr2[i][j];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
Output:
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements of the first matrix: 
Enter the elements of row 1: 1 2
Enter the elements of row 2: 3 4
Enter the elements of the second matrix: 
Enter the elements of row 1: 5 6
Enter the elements of row 2: 7 8
The sum of the matrices is: 
6 8
10 12
*/