#include<stdio.h>

int main(){
    int row,col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    printf("Enter the elements of the array: ");
    for(int i=0;i<row;i++){
        printf("Enter the elements of row %d: ",i+1);
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        printf("Sum of row %d is %d\n",i+1,sum);
    }
}