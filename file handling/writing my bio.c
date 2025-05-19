#include<stdio.h>

int main(){
    FILE *fp;
    fp=fopen("file.txt","w");

    if (fp==NULL){
        printf("Error opening file!!");
        return 1;
    }
    int age;
    char name[100];
    printf("Enter your age: ");
    scanf("%d",&age);
    getchar();

    printf("Enter your name: ");
    fgets(name,100,stdin);
    

    fprintf(fp,"Age = %d\n",age);
    fprintf(fp,"My name is %s",name);

    fclose(fp);
    return 0;
}