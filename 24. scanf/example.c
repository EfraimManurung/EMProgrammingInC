#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char **argv) {
    int x = 7;
    
    int result;
    // we just want integer input
    char nextch;
    do {
        printf("new x? ");
        result = scanf("%d%c", &x, &nextch);
        fflush(stdin); // clear out appending data
    } while (result == 0 || nextch != '\n');
    printf("x = %d\n", x);

    printf("What is your name? ");
    char name[20];
    scanf("%19s", name);    // only reading until 19 characters 
    printf("name = %s\n", name);
}