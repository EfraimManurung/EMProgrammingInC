#include<stdio.h>

// There are 2 passed, by value or arguments
int y = 4;

void dumb_function(int *a, int *b)
{   
    *a = *a + 10;
    *b = *b - 10;
}


int main() {
    int x = 5;

    dumb_function(&x, &y);
    printf("x : %i, y : %i\n", x, y);

    return 0;
}