#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

char *get_string(FILE *stream) {
    int bytes = 0;
    char *buf = NULL;

    char c;
    while((c = fgetc(stream)) != EOF && c != '\r' && c != '\n') {
        // have a valid
        bytes++;
        buf = realloc(buf, bytes+1);
        if (buf == NULL) {
            return NULL; //realloc failed
        }
        buf[bytes-1] = c;
    }

    if (c == '\r') {
        c = fgetc(stream);
        if (c != '\n') {
            //That what I meant
            ungetc(c, stream);
        }
    }

    if (buf == NULL) {
        if (c == EOF) {
            return NULL;
        } else {
            buf = malloc(1);
        }
    }

    // null terminate it
    buf[bytes] = 0;

    return buf;
}

char *get_string_2(FILE *stream) {
    int bytes = 0;
    int capacity = 50;
    char *buf = malloc(capacity);

    char c;
    while((c = fgetc(stream)) != EOF && c != '\r' && c != '\n') {
        // have a valid
        bytes++;

        if (bytes+1 >= capacity) {
            capacity = capacity * 2;
            buf = realloc(buf, capacity);
            if (buf == NULL) {
                return NULL; //realloc failed
            }
        }


        buf[bytes-1] = c;
    }

    if (c == '\r') {
        c = fgetc(stream);
        if (c != '\n') {
            //That what I meant
            ungetc(c, stream);
        }
    }

    if (bytes == 0) {
        if (c == EOF) {
            free(buf);
            return NULL;
        } else {
            buf = malloc(1);
        }
    }

    // null terminate it
    buf[bytes] = 0;

    return buf;
}

int main() {
    char *str;
    int linenum = 0;

    FILE * fin = fopen("./example.c", "r");

    while((str = get_string_2(fin)) != NULL) {
        printf("%d--\t%s\n", linenum++, str);
        free(str);
    }
}