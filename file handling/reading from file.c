#include<stdio.h>

int main(){
    FILE *fp;
    fp=fopen("file.txt","r");
    char ch[100];//to store data of file

    if (fp==NULL){
        printf("Error opening file!!");
        return 1;
    }//exception handling

    fgets(ch,sizeof(ch),fp);//reading data 
    fclose(fp);
    puts(ch);
    return 0;
}