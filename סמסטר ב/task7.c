#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define N 3

void **creat2DArray(unsigned rows, unsigned columns);
void printMatrix(int **matrix, unsigned rows, unsigned columns);
void freeMemory(int **matrix, unsigned rows, unsigned columns);

int main () {
    void replaceRows(void *matrix, unsigned row1, unsigned row2) {
        char **tempMatrix = (char **)matrix;
        char *tempRow = tempMatrix[row1];
        tempMatrix[row1] = tempMatrix[row2];
        tempMatrix[row2] = tempRow;
    };

    // ============================================================================= class 7.1

    void replaceColumns(int **matrix, unsigned rows, unsigned col1, unsigned col2) {
        int i, j, tempValue;

        for (i = 0; i < rows; i++) {
            tempValue = matrix[i][col1];
            matrix[i][col1] = matrix[i][col2];
            matrix[i][col2] = tempValue;
        }
    };

    // ============================================================================= class 7.2

    int **matrix = (int **)creat2DArray(N, N);
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;
    matrix[2][0] = 7;
    matrix[2][1] = 8;
    matrix[2][2] = 9;

    replaceRows(matrix, 0, 1);
    replaceColumns(matrix, N, 0, 1);
    printMatrix(matrix, N, N);
    freeMemory(matrix, N, N);

    return 0;
};


// =================== helpers ===================

void **creat2DArray(unsigned rows, unsigned columns) {
    int i;
    char **new2DArray = malloc(sizeof(char *) * rows);
    assert(new2DArray);

    for (i = 0; i < rows; i++) {
        new2DArray[i] = calloc(columns, sizeof(char));
    }
    
    return (void **)new2DArray;
}

void printMatrix(int **matrix, unsigned rows, unsigned columns) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d", matrix[i][j]);

            if (j != N - 1) printf(",");
        }

        printf("\n");
    }
};

void freeMemory(int **matrix, unsigned rows, unsigned columns) {
    int i;

    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    };

    free(matrix);
}
