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