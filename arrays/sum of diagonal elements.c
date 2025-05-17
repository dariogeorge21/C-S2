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
    printf("The matrix is:\n");
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            printf("%d ",arr[i][j]);
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

/*
Output:
Enter row: 3
Enter column: 3
Enter elements:
Enter row 1 elements: 1 2 3
Enter row 2 elements: 4 5 6
Enter row 3 elements: 7 8 9
The matrix is:
1 2 3
4 5 6
7 8 9
SUM IS: 15
*/

