#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node *link;
};

typedef struct node *NODE;

NODE getnode(){
    NODE x=(NODE)malloc(sizeof(struct node));
    x->link=NULL;
    return x;
}

NODE insert(NODE first,int elem){
    NODE temp=getnode();
    temp->num=elem;
    if(first==NULL)
        return temp;
    temp->link=first;
    return temp;
}
void display(NODE first){
    if(first==NULL){
        printf("NO numbers");
        return;
    }
    NODE cur=first;
    while(cur!=NULL){
        printf("%d ",cur->num);
        cur=cur->link;
    }
}
int compare(NODE cur,NODE uni){
    NODE q=uni;
    int f=0;
    while(q!=NULL){
        if(cur->num==q->num){
            f=1;
            break;
        }
        q=q->link;
    }
    return f;
}

void filter(NODE inp,NODE uni,NODE rep){
    NODE cur=inp;
    while(cur!=NULL){
        if(compare(cur,uni)==0)
            uni=insert(uni,cur->num);
        else{
            if(compare(cur,rep)==0)
                rep=insert(rep,cur->num);
        }
        cur=cur->link;
    }
    printf("\nUnique elements: \n");
    display(uni);
    printf("\nRepeated elements: \n");
    display(rep);
}
void main(){
    NODE inp=NULL,uni=NULL,rep=NULL;
    printf("Create list 1:\n");
    while(1){
        int ch;
        printf("Add data ? 1-y/0-n: ");
        scanf("%d",&ch);
        if(ch==1){
            int elem;
            printf("Enter number: "); scanf("%d",&elem);
            inp=insert(inp,elem);
        }
        else
            break;
    }
    display(inp);
    // remove duplicates
    filter(inp,uni,rep);   
}