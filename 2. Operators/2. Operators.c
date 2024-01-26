#include <stdio.h>


int main() {
    int x = 10;
    int y;

    y = x++;

    printf("int x = %d, int y = %d \n", x, y);

    // Logical operators
    // &&
    // ||
    // >, =>
    // <, =<
    int a, b, c, d;
    a = 5;
    b = 1;
    c = 1;
    d = 1;

    // Set if the operators equal to True or False
    // Now it is set to zero (false) in C language
    if((a > b) && ((a > c) || (a > d)) == 0) {
        printf("Operators working properly!");
    };

    return 0;
}