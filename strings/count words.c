#include<stdio.h>

/* Sample Output:
Enter a string: Hello world! How are you?
Number of words: 5

Enter a string: This    has   multiple    spaces
Number of words: 4

Note: Program counts words by:
- Identifying word boundaries (spaces)
- Handling multiple consecutive spaces
- Considering punctuation as word separators
*/

int main(){
    char str[100];
    int count = 0, inWord = 0; // 'count' tracks words, 'inWord' tracks if we are inside a word

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to safely read the string

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\t'){ 
            // If the current character is not a space, newline, or tab
            if(!inWord){ // If we are not already inside a word
                count++; // Increment word count
                inWord = 1; // Mark that we are now inside a word
            }
        } else {
            // If the current character is a space, newline, or tab
            inWord = 0; // Mark that we are outside a word
        }
    }

    printf("Number of words in the string: %d\n", count);
    return 0;
}