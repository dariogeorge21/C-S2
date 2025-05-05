#include<stdio.h>

/* Sample Output:
Enter a string: Hello World
Original string: Hello World
Uppercase: HELLO WORLD
Lowercase: hello world

Note: Demonstrates string case conversion:
- Uses ASCII values (A-Z: 65-90, a-z: 97-122)
- Conversion by adding/subtracting 32 from ASCII value
- Loop through each character of string until null terminator
*/

int main(){
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("The string is: %s", str);
    return 0;

}