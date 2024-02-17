#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//#define A 10
const int A = 10; // advantages bunch of checking from compiler
//const int B = A+1;

// example of what doesn't work
// int MyArray[A];

// bool ifAorB(int value) {
//     switch (value) {
//         case A:
//         case B:
//         return true;
//     }
//     return false;
// }

int main(int argc, char **argv) {

    // A = 12; // it is not allowed to do this
    printf("&A = %p\n", &A);

}