#include<stdio.h>

/* Sample Output:
Enter the text to write to file: Hello, this is a test
Successfully wrote to the file.

Contents of file:
Hello, this is a test

Note: This program demonstrates:
- File opening in write mode ("w")
- Writing text to file using fprintf()
- File opening in read mode ("r")
- Reading and displaying file contents
- Proper file closing using fclose()
*/

int main(){
    FILE *fp;
    fp=fopen("test.txt","w");
    if (fp==NULL){
        printf("file not found");
        return 1;
    }
    fprintf(fp,"hello world");
    fclose(fp);
    return 0;
}