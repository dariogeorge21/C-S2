#include<stdio.h>
#include<string.h>

/* Sample Output:
Enter first string: hello
Enter second string: hello
The strings are equal

Enter first string: hello
Enter second string: world
The strings are not equal

Note: String comparison is case-sensitive
*/

int main(){
    char str1[100],str2[100],str3[200];
    printf("Enter first string: ");
    fgets(str1,100,stdin);
    printf("Enter second string: ");
    fgets(str2,100,stdin);
    for (int i=0; i<strlen(str1); i++){
        if (str1[i]!=str2[i]){
            printf("Strings are not equal");
            return 0;
        }
    }
    printf("Strings are equal");
}