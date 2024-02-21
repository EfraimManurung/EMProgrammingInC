#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>

#define BITVALUE(X, N) (((X) >> (N)) & 0x1)

#define READONLY   0x1      // 00000001
#define HIDDEN     0x2      // 00000010
#define VOL_LABEL  0x4      // 00000100
#define SUBDIR     0x8      // 00001000
#define ARCHIVE    0x10     // 00010000

int main(void)
{
    uint32_t x = 42; // 101010
    printf("x = %d\n", x);

    // printf("bit 3 of x = %d\n", (x >> 3) & 0x1);
    // printf("bit 3 of x = %d\n", (x >> 4) & 0x1);

    int numbits = sizeof(x) * 8;
    for (int i=0; i < numbits; i++) 
    {
        printf("%d", BITVALUE(x, numbits - 1 - i));
    }
    printf("\n");
    // printf("bit 3 of x = %d\n", BITVALUE(x, 3));
    // printf("bit 3 of x = %d\n", BITVALUE(x, 4));

    if (x & READONLY) 
    {
        printf("read only!\n");
    }

    if (x & HIDDEN)
    {
        printf("hidden!\n");
    }

    return EXIT_SUCCESS;
}