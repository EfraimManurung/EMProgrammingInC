#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

void foo(void); // a function prototype
void bar(void); // try to describe a argument

int main(int argc, char **argv) {
    foo();
    bar();
    printf("Hello\n");
}

void foo(void) {
    printf("foo!\n");
}

void bar(void) {
    printf("bar!\n");
}