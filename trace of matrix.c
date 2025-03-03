#include<stdio.h>

int main(){
    int row, sum=0;
    printf("Enter no of rows or columns: ")
    scanf("%d",&row);

    for (int i=0;i<row;i++){
        for (int j=0;j<row;j++){
            printf("Enter element at %d,%d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for (int i=0;i<row;i++){
        for (int j=0;j<row;j++){
            if (i==j){
                sum+=arr[i][j];
            }
        }
    }
    printf("Trace of matrix: %d",sum);
}