#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define N 4

void freeMemory(int **matrix, unsigned matrix_size);

int main() {
    // ============================================================================= class 8.1

    int **createLowerTriangularMatrix(unsigned matrix_size) {
        int **matrix = (int **)malloc(matrix_size * sizeof(int *));
        int i, j, column = 1;

        for (i = 0; i < matrix_size; i++) {
            matrix[i] = (int *)malloc(column * sizeof(int));
        
            for (j = 0; j < column; j++) {
                srand(time(NULL));
                matrix[i][j] = rand() % 10 + i + j;
            };

            column++;
        };

        return matrix;
    }

    int getLowerTriangularMatrix(int **matrix, unsigned row, unsigned column) {
        if (row < column) return 0;
        return matrix[row][column];
    }

    void printLowerTriangularMatrix() {
        int **matrix = createLowerTriangularMatrix(N);
        int i, j;

        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                printf("%3d", getLowerTriangularMatrix(matrix, i, j));

                if (j < N - 1) printf(",");
            };

            printf("\n");
        };

        free(matrix);
    }

    // printLowerTriangularMatrix();

    // ============================================================================= class 8.2

    int **createUpperTriangularMatrix(unsigned matrix_size) {
        int **matrix = (int **)malloc(matrix_size * sizeof(int *));
        int i, j;

        for (i = 0; i < matrix_size; i++) {
            matrix[i] = (int *)malloc((matrix_size - i)  * sizeof(int));
        
            for (j = 0; j < matrix_size - i; j++) {
                srand(time(NULL));
                matrix[i][j] = rand() % 10 + i + j;
            };
        };

        return matrix;
    }

    int getUpperTriangularMatrix(int **matrix, unsigned row, unsigned column) {
        if (row > column) return 0;
        return matrix[row][column - row];
    }

    void printUpperTriangularMatrix() {
        int **matrix = createUpperTriangularMatrix(N);
        int i, j;

        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                printf("%3d", getUpperTriangularMatrix(matrix, i, j));

                if (j < N - 1) printf(",");
            };

            printf("\n");
        };

        free(matrix);
    }

    printUpperTriangularMatrix();

    return 0;
};

// =================== helpers ===================

void freeMemory(int **matrix, unsigned matrix_size) {
    int i, j;

    for (i = 0; i < matrix_size; i++) {
        free(matrix[i]);
    };

    free(matrix);
};