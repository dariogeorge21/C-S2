#include <stdio.h>
#include<math.h>

int main() {
    int num,tempNum,length=0,armNum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    tempNum=num;
    while (tempNum!=0){ //length of the number
        length++;
        tempNum/=10;
    }
    tempNum=num; 
    while (tempNum!=0){ //checking the armstrong
        int digit=tempNum%10;
        armNum+=(pow(digit,length));
        tempNum/=10;
    }
    if (armNum==num){
        printf("%d is Armstrong!!",num);
    }
    else{
        printf("%d is not armstrong!!",num);
    }
    return 0;
}

/* Sample Output:
Enter the number: 153
153 is Armstrong!!

Enter the number: 123
123 is not armstrong!!

A number is Armstrong if sum of each digit raised to the power of number of digits equals the number itself.
Example: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
*/