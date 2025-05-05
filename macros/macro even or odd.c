#include<stdio.h>

#define OddEven(x) ((x%2)==0?printf("even\n"):printf("odd\n"))

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    OddEven(num);
    return 0;
}

/*
Example Output:
Enter a number: 5
odd

Enter a number: 10
even
*/