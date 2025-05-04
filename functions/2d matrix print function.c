#include<stdio.h>

void printArray(int[][3],int,int);

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printArray(arr,3,3);
    return 0;
}

void printArray(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

/*
Output:
1 2 3
4 5 6
7 8 9
*/