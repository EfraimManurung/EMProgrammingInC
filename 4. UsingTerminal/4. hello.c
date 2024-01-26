#include<stdio.h>

// Using terminal to give inputs
// Getting Command-Line Arguments in C
int main(int argc, char **argv) {
    printf("Hello Efraim! - %d\n", argc);

    for (int i=0; i < argc; i++) {
        printf("arg %d - %s, %i, %f\n", i, argv[i], atoi(argv[i]), atof(argv[i]));
    }

    // return 0;
}

