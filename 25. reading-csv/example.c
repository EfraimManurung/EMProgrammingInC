#include <stdio.h>
#include <ctype.h>

#define BUFSIZE 4096

int main(int argc, char **argv) {

    char item[BUFSIZE];
    char delim;
    int item_count = 0;

    // safety could be use %4095s
    // while(scanf("%s", item) != EOF) {
    //     printf("item: %s\n", item);
    // }

    while (scanf("%[^,\n]%c", item, &delim) != EOF) {
        printf("%s, \n", item);
        item_count++;
        if (delim == '\n') {
            printf("(%d items)\n", item_count);
            item_count = 0;
        }
    }

}