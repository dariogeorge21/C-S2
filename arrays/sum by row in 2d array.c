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
    printf("The array is: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        printf("Sum of row %d is %d\n",i+1,sum);
    }
    return 0;
}

/*
Output:
Enter the number of rows and columns: 3 3
Enter the elements of the array: 
Enter the elements of row 1: 1 2 3
Enter the elements of row 2: 4 5 6
Enter the elements of row 3: 7 8 9
The array is:
1 2 3
4 5 6
7 8 9
Sum of row 1 is 6
Sum of row 2 is 15
Sum of row 3 is 24
*/