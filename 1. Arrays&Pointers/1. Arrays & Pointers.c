#include <stdio.h>

int main() {
    int y = 5;
    int *p = &y;

    printf("p = %i\n", p);  // address of y
    printf("p = %i\n", *p); // real number of p

    int v[5] = {0, 1, 2, 3, 4};
    int *vp = v;

    printf("v pointer = %d, v value = %d \n", vp, *vp);
    printf("v pointer = %d, v value = %d \n", vp+1, *(vp+1));
    printf("v pointer = %d, v value = %d \n", vp+2, *(vp+2));
    printf("v pointer = %d, v value = %d \n", vp+3, *(vp+3));
    printf("v pointer = %d, v value = %d \n", vp+4, *(vp+4));

    int i = 0;
    while(i < 5) {
        printf("v value = %d \n", v[i]);
        i++;
    };

    /* COMMENTED */

    

    return 0;
}

