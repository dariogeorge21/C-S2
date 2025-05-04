#include<stdio.h>
int main(){
    int arr[10][10];
    for(int i=1;i<10;i++){
        for(int j=1;j<10;j++){
            arr[i][j]=i*j;
        }
    }
    printf("Multiplication table\n");
    for(int i=1;i<10;i++){
        for(int j=1;j<10;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}