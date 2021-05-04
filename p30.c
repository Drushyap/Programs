/*
4.  Number game  :: Input an element ( string, number etc) and if the input is a number 
then accept, if the input is "done" then stop  accepting, 
otherwise accept the next element and so on.
Use the ele,ent "done" to stop accepting input and return the largest
 and smallest element recieved 

Sample input pattern    111 345 hello  356 678 111 999 bye 165 done
output: the smallest is 111 the largest is 999 

Hint Explore the usage of atoi function 
don use integer array !!!!!!
*/
#include <stdio.h>

#include <stdlib.h>

#include<string.h>

void main() {
        int max = -(__INT_MAX__), min = __INT32_MAX__;
        char inp[8];
        printf("input: ");
        while (1) {
            scanf("%s", inp);
            if (strcmp(inp, "done") == 0) {
                printf("The smallest number: %d and the greatest number %d ",min,max);
                    break;
                }
                else if (strcmp(inp, "0") == 0) {
                    if (atoi(inp) > max)
                        max = atoi(inp);
                    if (atoi(inp) < min)
                        min = atoi(inp);
                } else if (atoi(inp) != 0) {
                    if (atoi(inp) > max)
                        max = atoi(inp);
                    if (atoi(inp) < min)
                        min = atoi(inp);
                }
            }
        }