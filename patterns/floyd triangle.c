#include<stdio.h>

int main(){
    int limit;
    printf("Enter limit: ");
    scanf("%d",&limit);
    int number=1;
    for(int i=0;i<limit;i++){
        for (int j=0;j<i+1;j++){
            printf("%d ",number);
            number++;
        }printf("\n");
    }
}