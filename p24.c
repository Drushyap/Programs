#include <stdio.h>

int strleng(char st[]) {
    int i;
    for (i = 0; st[i] != '\0'; i++);
    return i;
}
void split(char inp[]) {
    for (int i = 0; i < strleng(inp); i++) {
        if (inp[i] == '\0' || inp[i] == ' ')
            printf("\n");
        else
            printf("%c", inp[i]);
    }
}
void main() {
    char inp[30];
    printf("Enter the string: ");
    gets(inp);
    split(inp);
}