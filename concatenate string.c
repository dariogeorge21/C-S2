#include<stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100],str3[200];
    printf("Enter first string: ");
    fgets(str1,100,stdin);
    printf("Enter second string: ");
    fgets(str2,100,stdin);
    strcat(str1,str2);
    printf("Concatenated string: %s",str1);
}