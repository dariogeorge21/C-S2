#include<stdio.h>

int main(){
    int n,check;
    printf("Enter limit: ");
    scanf("%d",&n);
    printf("Prime numbers upto %d are: ",n);
    for(int i=2; i<=n; i++){
        check = 0;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                check = 1;
                break;
            }
        }
        if(check==0){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}