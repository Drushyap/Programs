/*Write a program that returns the word count in a given sentence*/
#include <stdio.h>

#include <string.h>

void main() {
    int count = 0;
    char inp[50];
    printf("Input: ");
    gets(inp);
    for (int i = 0; i < strlen(inp); i++) {
        if (inp[i] == ' ')
            count++;
    }
    printf("Output: %d", count+1);
}