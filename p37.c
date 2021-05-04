#include <stdio.h>
void main(){
    int st[20],top=-1,c;
    char ch;
    do{
        scanf("%d",st[++top]);
        c++;
    }while(ch!='\n');
    int max=st[0];
    int pos;
    for(int i=1;i<c;i++){
        if(st[i]>max){
            max=st[i];
            pos=i;
        }
    }
    printf("Elements before largest:\n");
    for(int i=0;i<pos;i++)
        printf("%d\t",st[i]);
    printf("\nElements after largest:\n");
    for(int i=pos+1;i<c;i++)
        printf("%d\t",st[i]);
}