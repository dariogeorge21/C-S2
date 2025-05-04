#include<stdio.h>
int main(){
    int row,column,flag=1;
    printf("Enter row: ");
    scanf("%d",&row);
    printf("Enter column: ");
    scanf("%d",&column);
    int arr[row][column];
    printf("Enter elements: \n");
    for (int i=0;i<row;i++){
        printf("Enter row %d elements: ",i+1);
        for (int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<column; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            if (i!=j){
                if (arr[i][j]!=arr[j][i]){
                    flag=0;
                }
            }
        }
    }
    if (flag==1){
        printf("Symmetric Matrix!!");
    }else {
        printf("Not Symmetric!!");
    }
    return 0;
}

/*
Output 1 (Symmetric Matrix):
Enter row: 3
Enter column: 3
Enter elements:
Enter row 1 elements: 1 2 3
Enter row 2 elements: 2 4 5
Enter row 3 elements: 3 5 6
The matrix is:
1 2 3
2 4 5
3 5 6
Symmetric Matrix!!

Output 2 (Not Symmetric):
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
Not Symmetric!!
*/

