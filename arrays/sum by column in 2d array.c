#include<stdio.h>

int main(){
    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    printf("Enter the elements of the array: ");
    for(int i=0; i<row; i++){
        printf("Enter the elements of row %d: ", i+1);
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The array is: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        printf("Sum of column %d is %d\n",i+1,sum);
    }
    return 0;
}