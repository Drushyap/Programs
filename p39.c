#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
    char name[20];
    struct node *link;
};

typedef struct node *NODE;
NODE getnode(){
    NODE x=(NODE)malloc(sizeof(struct node));
    x->link=NULL;
    return x;
}
NODE insert(NODE first){
    NODE temp=getnode();
    printf("Enter name: ");
    scanf("%s",temp->name);
    if(first==NULL)
        return  temp;
    NODE cur=first,prev=NULL;
    while(strcmp(temp->name,cur->name)>0){
        prev=cur;
        cur=cur->link;
        if(cur==NULL)
            break;
    }
    if(prev==NULL){
        temp->link=cur;
        return temp;
    }
    prev->link=temp;
    temp->link=cur;
    return first;   
}

void display(NODE first){
    if(first==NULL){
        printf("NO names");
        return;
    }
    NODE cur=first;
    while(cur!=NULL){
        printf("%s\n",cur->name);
        cur=cur->link;
    }
}

void main(){
    NODE first=NULL;
    int ch;
    while(1){
        printf("\n1.Insert\n2.Display\n");
        scanf("%d",&ch);
        if(ch==1){
            first=insert(first);
        }
        else if(ch==2)
            display(first);
        else
            break;
    }
}