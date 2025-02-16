#include<stdio.h>
int main(){
    int row,column,sum=0;
    printf("Enter row: ");
    scanf("%d",&row);
    printf("Enter column: ");
    scanf("%d",&column);
    int arr[row][column];
    printf("Enter elements:\n ");
    for (int i=0;i<row;i++){
        printf("Enter row %d elements: ",i+1);
        for (int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }//print
    for (int i=0;i<row;i++){
        printf("Enter row %d elements: ",i+1);
        for (int j=0;j<column;j++){
            printf("%d",arr[i][j]);
        }printf("\n");
    }//check
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            if (i==j){
                sum+=arr[i][j];
            }
        }
    }//sum
    printf("SUM IS: %d",sum);
    return 0;
}

