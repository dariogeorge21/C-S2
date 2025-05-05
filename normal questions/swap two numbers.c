#include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter number1: ");
    scanf("%d", &num1);
    printf("Enter number2: ");
    scanf("%d", &num2);
    //method 1
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After swapping: num1=%d, num2=%d\n",num1,num2);
    //method 2
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("After swapping: num1=%d, num2=%d\n",num1,num2);
    //method 3
    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;
    printf("After swapping: num1=%d, num2=%d\n",num1,num2);
    //method 4
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("After swapping: num1=%d, num2=%d\n",num1,num2);
    //method 5
    num1=num1+num2-(num2=num1);
    printf("After swapping: num1=%d, num2=%d\n",num1,num2);
    return 0;
}
/* Sample Output:
Enter number1: 10
Enter number2: 20
After swapping: num1=20, num2=10
After swapping: num1=10, num2=20
After swapping: num1=20, num2=10
After swapping: num1=10, num2=20
After swapping: num1=20, num2=10

Note: Shows 5 different methods of swapping:
1. Using temporary variable
2. Using addition and subtraction
3. Using multiplication and division
4. Using XOR operation
5. Using single line expression
*/