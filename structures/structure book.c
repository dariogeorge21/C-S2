#include<stdio.h>
#include<string.h>

struct book{
    char title[50];
    char author[50];
    int price;
};

void printArray(struct book[],int);
int main(){
    struct book books[100];
    int total;
    
    printf("Enter number of books:");
    scanf("%d",&total);
    getchar(); //clears input buffer

    for(int i=0;i<total;i++){
        printf("Enter title of book %d:",i+1);
        scanf("%s",books[i].title);
        printf("Enter author of book %d:",i+1);
        scanf("%s",books[i].author);
        printf("Enter price of book %d:",i+1);
        scanf("%d",&books[i].price);
    }
    printf("\nThe book details: \n");
    printArray(books,total);
    return 0;
}

void printArray(struct book books[],int total){
    for(int i = 0; i < total; i++){
        printf("\nBook %d:\n", i+1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %d\n", books[i].price);
    }
}

//Output
// Enter number of books: 2

// Enter details for book 1:
// Enter title: Programming
// Enter author: John
// Enter price: 500

// Enter details for book 2:
// Enter title: Database
// Enter author: Smith
// Enter price: 600
---
// Book Details:
// Book 1:
// Title: Programming
// Author: John
// Price: 500

// Book 2:
// Title: Database
// Author: Smith
// Price: 600