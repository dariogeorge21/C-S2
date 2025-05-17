#include<stdio.h>

int pass(int[],int);

int main(){
    int a[5]={1,2,3,4,5};
    int result=pass(a,5);
    printf("sum of array is %d\n",result);
    return 0;
}

int pass(int x[],int size){
    int sum=0;
    for (int i=0;i<size;i++){
        sum=sum+x[i];
    }
    return sum;
}

/* Sample Output:
sum of array is 15
*/