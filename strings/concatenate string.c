#include<stdio.h>
#include<string.h>

/* Sample Output:
Enter first string: Hello 
Enter second string: World
Concatenated string: Hello World

Note: String concatenation without using strcat():
1. Find end of first string (null terminator)
2. Copy second string characters starting from that position
3. Add null terminator at the end
*/

//method 1
// int main(){
//     char str1[100],str2[100];
//     printf("Enter first string: ");
//     fgets(str1,100,stdin);
//     printf("Enter second string: ");
//     fgets(str2,100,stdin);
//     strcat(str1,str2);
//     printf("Concatenated string: %s",str1);
// }

// method 2
int main(){
    char str1[100],str2[100];
    int i=0;
    printf("Enter first string: ");
    fgets(str1,100,stdin);
    printf("Enter second string: ");
    fgets(str2,100,stdin);
    while(str1[i]!='\0'){
        i++;
    }
    int j=0;
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("Concatenated string: %s",str1);
}