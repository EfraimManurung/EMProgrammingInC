#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define ARRAYSIZE 4

int main(int argc, char **argv) {
    // const int ARRAYSIZE = 4;

    int myvalues[ARRAYSIZE] = {1,2,3,4};

    int index = 0;
    // while (index < ARRAYSIZE) {
    //     printf("%d: %d\n", index, myvalues[index]);
    //     index++;
    // }

    for (int i = 0; i < ARRAYSIZE; i++) {
        printf("%d: %d\n", i, myvalues[i]);
    }

    for (int i = 0; i < ARRAYSIZE; i++) {
        printf("%d: %d\n", i, myvalues[ARRAYSIZE-1-i]);
    }

    // another for loop
    for(int i = ARRAYSIZE-1; i >= 0; i--) {
        printf("%d: %d\n", i, myvalues[i]);
    }

    // finobacci numbers
    for (int a = 0, b = 1, c; b < 100; c = a, a = b, b = b + c) {
        printf("%d\n", b);
    }

    int a = 0, b = 1, c;
    while (b <100) {
        printf("%d\n", b);
        c = a;
        a = b;
        b = b + c;
    }
}