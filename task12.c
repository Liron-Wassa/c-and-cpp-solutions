#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define R 3
#define C 3

typedef int Mat[][C];

int main()
{
    // void scanMatrix(Mat matrix) {
    //     int i, j;

    //     for (i = 0; i < R; i++) {
    //         for (j = 0; j < C; j++) {
    //             printf("Enter a number: \n");
    //             scanf("%d", &matrix[i][j]);
    //         };
    //     };
    // };

    // void printMatrix(Mat matrix) {
    //     int i, j;

    //     for (i = 0; i < R; i++) {
    //         for (j = 0; j < C; j++) {
    //             printf("%d,", matrix[i][j]);
    //         };

    //         printf("\n");
    //     };
    // };

    // Mat matrix = { 0 };

    // scanMatrix(matrix);
    // printMatrix(matrix);

    // ============================================================================= class 12.1

    // void matCalculate(Mat matrix, int *sum, int *mul, double *avg) {
    //     int i, j;

    //     *avg = 0;
    //     *sum = 0;
    //     *mul = 1;

    //     for (i = 0; i < R; i++) {
    //         for (j = 0; j < C; j++) {
    //             *sum += matrix[i][j];
    //             *mul *= matrix[i][j];
    //         };
    //     };

    //     *avg = *sum / (R * C);
    // };

    // int sum, mul;
    // double avg;

    // Mat matrix = {
    //     {1,2,3},
    //     {1,2,3},
    //     {1,2,3},
    // };

    // matCalculate(matrix, &sum, &mul, &avg);

    // printf("sum: %d, mul: %d, avg: %lf\n", sum, mul, avg);

    // ============================================================================= class 12.2

    // void calculateVerticals(Mat matrix, int *vertical1, int *vertical2) {
    //     int i, j;

    //     *vertical1 = 0;
    //     *vertical2 = 0;

    //     for (i = 0; i < C; i++) {
    //         *vertical1 += matrix[i][i];
    //         *vertical2 += matrix[i][C - 1 - i];
    //     };
    // };

    // int vertical1, vertical2;

    // Mat matrix = {
    //     {1,2,3},
    //     {1,2,3},
    //     {1,2,3},
    // };

    // calculateVerticals(matrix, &vertical1, &vertical2);

    // printf("v1: %d, v2: %d", vertical1, vertical2);

    // ============================================================================= class 12.3

    // int binSearch(int arr[], int size, int key) {
    //     int start = 0, end = size - 1, middle;

    //     while (start <= end) {
    //         middle = (end - start) / 2 + start;

    //         if (arr[middle] == key) return middle;
    //         if (arr[middle] > key) end = middle - 1;
    //         else start = middle + 1;
    //     };

    //     return -1;
    // };

    // int findNumberInMatrix(Mat matrix, int arr[R]) {
    //     int i;

    //     for (i = 0; i < R; i++) {
    //         if (binSearch(matrix[i], C, arr[i]) == -1) return 0;
    //     };

    //     return 1;   
    // };

    // int arr[] = {4, 7, 1};

    // Mat matrix = {
    //     {2,4,9},
    //     {3,7,11},
    //     {1,2,3},
    // };

    // printf("%d\n" ,findNumberInMatrix(matrix, arr));

    // ============================================================================= class 12.4

    // void swap(int *a, int *b) {
    //     int temp = *a;
    //     *a = *b;
    //     *b = temp;
    // };

    // void turnTheMatrix(Mat matrix) {
    //     int i, j;

    //     for (i = 0; i < R; i++) {
    //         for (j = C - 1; j > 0; j--) {
    //             swap(&matrix[i][j], &matrix[i][j - 1]);
    //         };
    //     };
    // };

    // Mat matrix = {
    //     {2,4,9},
    //     {3,7,11},
    //     {1,2,3},
    // };

    // turnTheMatrix(matrix);

    // ============================================================================= class 12.5

    return 0;
};
