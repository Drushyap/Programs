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

NODE delete_by_name(NODE first){
    if(first==NULL){
        printf("Empty");
        return NULL;
    }
    printf("Enter name");
    char dname[20];
    scanf("%s",dname);
    NODE cur=first,prev=NULL;
    while(strcmp(cur->name,dname)!=0){
        prev=cur;
        cur=cur->link;
        if(cur==NULL){
            printf("Not found");
            return first;
        }
    }
    //first node matched
    if(prev==NULL){
        NODE next=cur->link;
        free(cur);
        return next;
    }
    prev->link=cur->link;
    free(cur);
    return first;
        
}

NODE delete_by_pos(NODE first){
    if(first==NULL){
        printf("Empty");
        return NULL;
    }
    int pos;
    printf("Enter position: "); scanf("%d",&pos);
    int i=1;
    NODE cur=first,prev=NULL;
    while(i!=pos){
        prev=cur;
        cur=cur->link;
        i++;
    }
    if(prev==NULL){
        NODE next=cur->link;
        free(cur);
        return next;
    }
     prev->link=cur->link;
    free(cur);
    return first;
}

void main(){
    NODE first=NULL;
    int ch;
    while(1){
        printf("\n1.Insert\n2.Display\n3.Delete by name\n4.Delete by pos\n5.Exit\n");
        scanf("%d",&ch);
        if(ch==1)
            first=insert(first);
        else if(ch==2)
            display(first);
        else if(ch==3)
            first=delete_by_name(first);
        else if(ch==4)
            first=delete_by_pos(first);
        else
            return;
    }
}