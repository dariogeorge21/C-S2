#include<stdio.h>
#include<string.h>

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