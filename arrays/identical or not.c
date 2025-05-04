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
            }if (i==j){
                if(arr[i][j]!=1){
                    flag=0;
                    break;
                }
            }
        }
    }
    if (flag==1){
        printf("Identity Matrix!!\n");
    }else{
        printf("Not Identity Matrix!!\n");
    }
    return 0;
}

/*
Output 1 (Identity Matrix):
Enter the number of rows and columns: 3
Enter the elements of the matrix: 
Enter the elements of row 1: 1 0 0
Enter the elements of row 2: 0 1 0
Enter the elements of row 3: 0 0 1
Identity Matrix!!

Output 2 (Not Identity Matrix):
Enter the number of rows and columns: 3
Enter the elements of the matrix: 
Enter the elements of row 1: 1 0 1
Enter the elements of row 2: 0 1 0
Enter the elements of row 3: 0 0 1
Not Identity Matrix!!
*/