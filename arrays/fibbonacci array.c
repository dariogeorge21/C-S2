#include<stdio.h>

int main(){
    int first=0,next,second=1,limit;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    int fib[limit];
    fib[0]=first;
    fib[1]=second;
    for(int i=2;i<limit;i++){
        next=first+second;
        fib[i]=next;
        first=second;
        second=next;
    }
    for(int i=0;i<limit;i++){
        printf("%d ",fib[i]);
    }
}

/*
Output:
Enter the number of terms: 8
0 1 1 2 3 5 8 13
*/