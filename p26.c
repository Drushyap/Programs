//program to check two strings anagram or not
#include <stdio.h>

#include <string.h>

struct str {
    char cont[100];
};
typedef struct str S;
void sort(char str[]) {
    char temp;
    for (int i = 0; i < strlen(str) - 1; i++) {
        for (int j = i + 1; j < strlen(str); j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
void main() {
    S inp1, inp2;
    printf("Enter string 1: ");
    gets(inp1.cont);
    printf("Enter string 2: ");
    gets(inp2.cont);
    sort(inp1.cont);
    sort(inp2.cont);
    if (strlen(inp1.cont) != strlen(inp2.cont))
        printf("Not anagram");
    else {
        int flag = 0;
        for (int i = 0; i < strlen(inp1.cont); i++) {
            if (inp1.cont[i] != inp2.cont[i]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("Anagram");
        else
            printf("Not anagram");
    }
}