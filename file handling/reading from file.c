#include<stdio.h>

int main(){
    FILE *fp;
    fp=fopen("file.txt","r");
    char ch[100];

    if (fp==NULL){
        printf("Error opening file!!");
        return 1;
    }//exception handling

    while (fgets(ch,sizeof(ch),fp)){
        printf("%s",ch);
    }
    fclose(fp);
    return 0;
}