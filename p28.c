//most occured character
#include <stdio.h>

#include<string.h>

#include<math.h>

void main() {
    int alp[255];
    char inp[30];
    int x;
    printf("Input: ");
    gets(inp);
    for (int i = 0; i < 255; i++)
        alp[i] = 0;
    for (int i = 0; i < strlen(inp); i++) {
        x = (int) inp[i];
        alp[x] += 1;
    }
    int max = 0;
    for (int i = 0; i < 255; i++) {
        if (alp[i] > alp[max]) {
            max = i;
        }
    }
    printf("Most occured character %c", max);
}