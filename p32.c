/*2. Write a program to do the following (Use  array of structures)
    a. Create a book database (title, author, price, no_pages)
    b. Update the book price based on the title.
    c. Display appropriate message if updation fails.

*/
#include <stdio.h>
#include <string.h>
struct book{
    char title[30];
    char author[20];
    float price;
    int pages;
};
typedef struct book B;

void add(B arr[],int count){
    char tit[30],auth[30];
    int pag;
    float pri;
    printf("Enter title,author,price,pages: ");
    getchar();
    gets(arr[count].title); 
    getchar();
    gets(arr[count].author);
    scanf("%d%f",&arr[count].price,&arr[count].pages);
}

void update(B arr[],int count){
    char book[30];
    int flag=0;
    printf("Enter the book you wanna update: ");
    getchar();
    gets(book);
    for(int i=0;i<=count;i++){
        if(strcmp(arr[i].title,book)==0){
            printf("Enter new price: ");
            scanf("%d",&arr[i].price);
            printf("Book updated successfully!!");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Book not found!!Updation failed");
}
void main(){
    B arr[20];
    int ch,count=0;
    while(1){
        printf("\nEnter choice:\n1.Add book\n2.Update book\n3.Exit\n");
        scanf("%d",&ch);
        if(ch==1){
            add(arr,count);
            count++;
            printf("book successfully added");
        }
        else if(ch==2)
            update(arr,count);
        else
            return;
    }
}