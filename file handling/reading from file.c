#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp;
    char ch[100],temp[25];

    fp=fopen("file.txt","r");
    
    if (fp==NULL){
        printf("Error opening file!!");
        return 1;
    }
    while (fgets(temp,sizeof(temp),fp)!=NULL){
        strcat(temp,ch);
    }
    fclose(fp);
    puts(ch);
    return 0;
}