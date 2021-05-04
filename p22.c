#include <stdio.h>

#include <stdlib.h>

void main() {
    int n;
    printf("Enter size of string: ");
    scanf("%d", & n);
    char * str = (char * ) malloc(n * sizeof(char) + 1);
    printf("Enter string:");
    getchar();
    gets(str);
    printf("The string: %s", str);
}