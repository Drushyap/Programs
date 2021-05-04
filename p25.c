//reverse words in a string
#include <stdio.h>

int strleng(char st[]) {
    int i;
    for (i = 0; st[i] != '\0'; i++);
    return i;
}
void main() {
    char inp[20], rev[20];
    printf("Enter input string: ");
    gets(inp);
    int j = 0;
    for (int i = strleng(inp) - 1; i >= 0; i--, j++) {
        rev[j] = inp[i];
    }
    rev[j] = '\0';
    printf("The reversed string: %s", rev);
}