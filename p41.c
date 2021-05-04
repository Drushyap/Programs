#include <stdio.h>
#include <stdlib.h>

struct node{
    int empid;
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
    printf("Enter empid: ");    scanf("%d",&temp->empid);
    if(first==NULL)
        return temp;
    temp->link=first;
    return temp;
}

NODE sort(NODE l1,NODE l2){
    NODE cur=l1;
    while(cur->link!=NULL){
        cur=cur->link;
    }
    cur->link=l2;
    for(NODE i=l1;i->link!=NULL;i=i->link){
        for(NODE j=l1->link;j!=NULL;j=j->link){
            if(i->empid>j->empid){
                int temp=i->empid;
                i->empid=j->empid;
                j->empid=temp;
            }
        }
    }
    return l1;
}

void display(NODE first){
    if(first==NULL){
        printf("NO names");
        return;
    }
    NODE cur=first;
    while(cur!=NULL){
        printf("%d ",cur->empid);
        cur=cur->link;
    }
}

void main(){
    NODE l1=NULL;
    NODE l2=NULL;
    printf("Create list 1:\n");
    while(1){
        int ch;
        printf("Add data ? 1-y/0-n: ");
        scanf("%d",&ch);
        if(ch==1)
            l1=insert(l1);
        else
            break;
    }
    display(l1);
    printf("\nCreate list 2:\n");
    while(1){
        int ch;
        printf("Add data ? 1-y/0-n: ");
        scanf("%d",&ch);
        if(ch==1)
            l2=insert(l2);
        else
            break;
    }
    display(l2);
    l1=sort(l1,l2);
    printf("Sorted list: \n");
    display(l1);
}