#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the elements of the matrix: ");
    for(int i=0; i<n; i++){
        printf("Enter the elements of row %d: ", i+1);
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int flag=1;
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if (i!=j){
                if(arr[i][j]!=0){
                    flag=0;
                    break;
                }
            }
        }
    }
    if (flag==1){
        printf("Diagonal Matrix!!\n");
    }else{
        printf("Not Diagonal Matrix!!\n");
    }
    return 0;
}

/*
Output 1 (Diagonal Matrix):
Enter the number of rows and columns: 3
Enter the elements of the matrix: 
Enter the elements of row 1: 1 0 0
Enter the elements of row 2: 0 2 0
Enter the elements of row 3: 0 0 3
Diagonal Matrix!!

Output 2 (Not Diagonal Matrix):
Enter the number of rows and columns: 3
Enter the elements of the matrix: 
Enter the elements of row 1: 1 2 0
Enter the elements of row 2: 0 2 0
Enter the elements of row 3: 0 0 3
Not Diagonal Matrix!!
*/