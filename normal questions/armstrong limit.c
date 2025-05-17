#include<stdio.h>
#include<math.h>

int main(){
    int limit,temp;
    printf("Enter the limit: ");
    scanf("%d",&limit);

    printf("Armstrong numbers between 1 and %d are: ",limit);

    for(int i=1;i<=limit;i++){
        temp=i;
        int length=0;
        while(temp!=0){
            length++;
            temp/=10;
        }
        temp=i;
        int sum=0;
        while(temp!=0){
            int digit=temp%10;
            sum+=pow(digit,length);
            temp/=10;
        }
        if(sum==i){
            printf("%d ",i);
        }
    }
    return 0;
}