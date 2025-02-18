#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    char name[20];
    printf("Enter your name: ");
    scanf("%s",name);
    char gender;
    printf("Enter your gender: ");
    scanf("%c",&gender);
    printf("Name: %s\nAge: %d\nGender: %c",name,age,gender);
    return 0;
}