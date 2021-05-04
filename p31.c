/*1. Write a program that declares and intializes a strucutre variable.
print the values of that structure variable
Consider :: the use case of a book stall and following details
book_id, book_title, author, price*/
#include <stdio.h>
struct book{
    int book_id;
    char book_title[30];
    char author[20];
    float book_price;

};
void main(){
    struct book B={.book_id=11,.book_title="Sherlock Holmes",.author="Conan Doyle",.book_price=399.00};
    printf("%s",B.author);
}