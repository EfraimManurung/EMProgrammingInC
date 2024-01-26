// Today we're going to learn about arrays and how to make it
// Class beginner

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// static array, not flexible

// const int ARRAY_LENGTH = 6;

#define ARRAY_LENGTH 5

void printarray(int *myarray, int length) {
    for(int i=0; i < length; i++)
    {
        printf("%i, ", myarray[i]);
    }
    printf("\n");
}

int main(int argc, char **argv) {
    int a[ARRAY_LENGTH] = {1, 2, 3, 4, 5};
    int b[ARRAY_LENGTH] = {5, 4, 3, 2, 1};

    int *p = malloc(sizeof(int) * 15);
    int *z = calloc(sizeof(int) * 1, sizeof(int) * 15);

    // a[0] = 76; // square brackets specify a specific element
    // int x = a[1];
    for (int i=0; i < 15; i++) {
        p[i] = i;
    }

    int arglengths[argc];
    for (int i=0; i < argc; i++) {
        arglengths[i] = strlen(argv[i]);
    }

    // realloct the block or the length
    p = realloc(p, sizeof(int) * 20);

    printarray(a, ARRAY_LENGTH);
    printarray(b, ARRAY_LENGTH);
    printarray(p, 15);
    printarray(z, 15);
    printarray(arglengths, argc);

    free(p);
    free(z);
}