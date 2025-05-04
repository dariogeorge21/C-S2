#include<stdio.h>

int main(){
    int row, sum=0;
    printf("Enter no of rows or columns: ");
    scanf("%d",&row);
    int arr[row][row];

    for (int i=0;i<row;i++){
        for (int j=0;j<row;j++){
            printf("Enter element at %d,%d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (int i=0;i<row;i++){
        for (int j=0;j<row;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<row;i++){
        for (int j=0;j<row;j++){
            if (i==j){
                sum+=arr[i][j];
            }
        }
    }
    printf("Trace of matrix: %d\n",sum);
    return 0;
}

/*
Output:
Enter no of rows or columns: 3
Enter element at 0,0: 1
Enter element at 0,1: 2
Enter element at 0,2: 3
Enter element at 1,0: 4
Enter element at 1,1: 5
Enter element at 1,2: 6
Enter element at 2,0: 7
Enter element at 2,1: 8
Enter element at 2,2: 9
The matrix is:
1 2 3
4 5 6
7 8 9
Trace of matrix: 15
*/