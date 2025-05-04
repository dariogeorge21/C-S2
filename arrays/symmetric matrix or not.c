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
    }//check
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            if (i!=j){
                if (arr[i][j]!=arr[j][i]){
                    flag=0;
                }
            }
        }
    }//confirm
    if (flag==1){
        printf("Symmetric Matrix!!");
    }else {
        printf("Not Symmetric!!");
    }
    return 0;
}

