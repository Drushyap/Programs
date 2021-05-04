#include<stdio.h>

#include<stdlib.h>

#include<string.h>

char * accept(char * , int);
void disp(char * );
int main() {
    int n;
    char * txt;
    txt = accept(txt, n);
    disp(txt);
    return 0;
}
char * accept(char * txt, int n) {
    printf("maxm limit : ");
    scanf("%d", & n);
    txt = (char * ) malloc(n * sizeof(char));
    printf("Input :");
    getchar();
    gets(txt);
    return txt;
}
void disp(char * txt) {
    printf("output : %s", txt);
}