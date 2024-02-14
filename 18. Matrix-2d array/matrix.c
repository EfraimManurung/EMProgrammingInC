#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MATRIX_ROWS = 5;
const int MATRIX_COLS = 4;

void print_matrix(int rows, int cols, int mat[rows][cols]) {
    for (int row=0; row < rows; row++) {
        printf("%d:\t", row);
        for (int col=0; col < cols; col++) {
            printf("%x ", mat[row][col]);
        }
        printf("\n");
    }
}

void print_matrix_2(int rows, int cols, int **mat) {
    for (int row=0; row < rows; row++) {
        printf("%d:\t", row);
        for (int col=0; col < cols; col++) {
            printf("%x ", mat[row][col]);
        }
        printf("\n");
    }
}

int main(int argc, char **argv)
{
    //int matrix[MATRIX_ROWS][MATRIX_COLS];
    //int *matrix[MATRIX_ROWS];
    int **matrix = calloc(MATRIX_ROWS, sizeof(int*));

    for (int row=0; row < MATRIX_ROWS; row++) {
        matrix[row] = calloc(MATRIX_ROWS, sizeof(int));
        for (int col=0; col < MATRIX_COLS; col++) {
            matrix[row][col] = (row << 16) | col;
        }
    }

    printf("sizeof(matrix) = %lu\n", sizeof(matrix));
    //print_matrix(MATRIX_ROWS, MATRIX_COLS, matrix);
    print_matrix_2(MATRIX_ROWS, MATRIX_COLS, matrix);

    for (int row=0; row < MATRIX_ROWS; row++) {
        free(matrix[row]);
    }

    free(matrix);
}