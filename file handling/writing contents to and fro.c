#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp1,*fp2;
    fp1=fopen("file.txt","r");
    fp2=fopen("file2.txt","w");
    if (fp1==NULL || fp2==NULL){
        printf("Error opening file!!");
        return 1;
    }
    char temp[1000];
    while (fgets(temp,sizeof(temp),fp1)!=NULL){
        fputs(temp,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}