#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFSIZE 10

char buffer[BUFSIZE] = "EFRAIM";
char password[BUFSIZE] = "PASSWORD";

int main(int argc, char **argv) {

    if (argc != 3) {
        printf("usage: %s <password> <string_to_print>", argv[0]);
        exit(1);
    }

    strcpy(buffer, argv[2]);
    if (strcmp(argv[1], password) == 0) {
        printf("password checks out\n");
        printf("MSG: %s\n", buffer);
    } else {
        printf("password error!\n");
    }
}