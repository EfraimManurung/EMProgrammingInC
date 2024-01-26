#include <stdio.h>

//#define ARRAY_LENGTH 240

//const int ARRAY_LENGTH = 240;

int main() {
    const int ARRAY_LENGTH = 240;

    int *p = &ARRAY_LENGTH;
    *p = 57;

    printf("%d\n", ARRAY_LENGTH);
}