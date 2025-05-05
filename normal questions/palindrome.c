#include<stdio.h>

/* Sample Output:
Enter a number: 12321
12321 is a palindrome number

Enter a number: 12345
12345 is not a palindrome number

Note: A palindrome number reads the same backwards as forwards
Method:
1. Store original number
2. Reverse the number digit by digit
3. Compare original with reversed number
*/

int main(){
    int num,revNUm=0,temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0){
        revNUm = revNUm*10 + temp%10;
        temp = temp/10;
    }
    if(revNUm == num){
        printf("The number is a palindrome\n");
    }
    else{
        printf("The number is not a palindrome\n");
    }
    
    return 0;
}