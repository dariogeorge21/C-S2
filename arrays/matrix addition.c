#include<stdio.h>

int main(){
    int row, column;

    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of column: ");
    scanf("%d",&column);

    int arr1[row][column];
    int arr2[row][column];
    int sum[row][column];

    //arr1
    printf("Enter elements for first matrix:\n ");
    for(int i=0;i<row;i++){
        printf("Enter for the row %d:\n",i+1);
        for (int j=0;j<column;j++){
            scanf("%d",&arr1[i][j]);        }
    }
    //arr2
    printf("Enter elements for second matrix:\n ");
    for(int i=0;i<row;i++){
        printf("Enter for the row %d:\n",i+1);
        for (int j=0;j<column;j++){
            scanf("%d",&arr2[i][j]);        }
    }

    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    //print
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d  ",sum[i][j]);
        }printf("\n");
    }
    return 0;
}
