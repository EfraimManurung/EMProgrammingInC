#include <stdio.h>
#include <stdlib.h>

void sayhello() {
    printf("Hello\n");
}

int main() {
    sayhello();
    int x = 0xFEEDBEEF;
    int y;
    // We have to cascade in C++ for make it integer type
    void *p = (int *) malloc(sizeof(int)); //&y; // no assumption for this memory, no type
    int *ip = &x;
    //p = ip;
    *ip = 0x00C0FFEE;
    // *p = 0xDEADBEEF; not allowed, we can't do this
    // force it!
    *(int*)p = 0xDEADBEEF;

    printf("sizeof(void*) = %zu\n", sizeof(p));
    printf("sizeof(void*) = %zu\n", sizeof(ip));

    printf("p -> %p (%x)\n", p, *(int*)p);
    printf("ip -> %p (%x)\n", ip, *ip);
    free(p);
}