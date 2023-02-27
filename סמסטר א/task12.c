#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define R 4
#define C 3
#define N 3

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

    // double *getRowsAverage(Mat matrix) {
    //     int i, j;
    //     double rowAverageSum = 0;
    //     double *rowsAverage = (double *)calloc(R, sizeof(double));
    //     assert(rowsAverage);

    //     for (i = 0; i < R; i++) {
    //         for (j = 0; j < C; j++) {
    //             rowAverageSum += matrix[i][j];
    //         };

    //         rowsAverage[i] = rowAverageSum / R;
    //         rowAverageSum = 0;
    //     };

    //     return rowsAverage;
    // };

    // Mat matrix = {
    //     {2,4,9},
    //     {3,8,11},
    //     {1,2,3},
    // };

    // ============================================================================= laboratory 12.1

    // int *getSubRowCol(int matrix[][N]) {
    //     int i, j;
    //     int rowSum = 0;
    //     int columnSum = 0;
    //     int *sub = (int *)calloc(N, sizeof(int));
    //     assert(sub);

    //     for (i = 0; i < N; i++) {
    //         for (j = 0; j < N; j++) {
    //             rowSum += matrix[i][j];
    //             columnSum += matrix[j][i];
    //         };

    //         sub[i] = rowSum - columnSum;
    //         rowSum = 0;
    //         columnSum = 0;
    //     };

    //     return sub;
    // };

    // int matrix[][N] = {
    //     {9,2,4},
    //     {3,7,11},
    //     {3,1,2},
    // };

    // ============================================================================= laboratory 12.2

    // int calcVerticalScalars(int matrix[][N]) {
    //     int i, sum = 0;;

    //     for (i = 0; i < N; i++) {
    //         sum += matrix[i][i] * matrix[i][N - 1 - i];  
    //     };

    //     return sum;
    // };

    // int matrix[][N] = {
    //     {1,3,4,9},
    //     {2,5,5,2},
    //     {3,1,4,1},
    //     {8,4,5,1},
    // };

    // printf("%d\n", calcVerticalScalars(matrix));


    // ============================================================================= laboratory 12.3

    // int matrixAreSymmetrical(int matrix[][N]) {
    //     int i, j;

    //     for (i = 0; i < N; i++) {
    //         for (j = i; j < N; j++) {
    //             if (matrix[i][j] != matrix[j][i]) return 0;
    //         };
    //     };

    //     return 1;
    // };

    // int matrix[][N] = {
    //     {1,2,4},
    //     {2,1,11},
    //     {4,11,1},
    // };

    // printf("%d\n", matrixAreSymmetrical(matrix));

    // ============================================================================= laboratory 12.4

    // int isVerticalsAreSorted(int matrix[][N]) {
    //     int i;

    //     for (i = 0; i < N - 1; i++) {
    //         if (matrix[i][i] > matrix[i + 1][i + 1]) return 0;
    //         if (matrix[i][N - i - 1] > matrix[i + 1][N - i - 2]) return 0;
    //     };

    //     return 1;
    // };
    
    // int matrix[][N] = {
    //     {-7,5,78,5},
    //     {15,0,26,12},
    //     {18,48,1,36},
    //     {59,4,6,3},
    // };

    // printf("%d\n", isVerticalsAreSorted(matrix));

    // ============================================================================= laboratory 12.5

    // void binarySearchVerticals(int matrix[][N], int key, int *row, int *column) {
    //     int start = 0, end = 2 * N - 1, middle;

    //     *row = -1;
    //     *column = -1;

    //     while (start <= end) {
    //         middle = (end - start) / 2 + start;

    //         if (middle < N) {
    //             if (matrix[middle][middle] == key) {
    //                 *row = middle;
    //                 *column = middle;
    //                 break;
    //             };

    //             if (matrix[middle][middle] > key) end = middle - 1;
    //             else start = middle + 1;
    //         } else {
    //             if (matrix[middle - N][2 * N - 1 - middle] == key) {
    //                 *row = middle - N;
    //                 *column = 2 * N - 1 - middle;
    //                 break;
    //             };

    //             if (matrix[middle - N][2 * N - 1 - middle] > key) end = middle - 1;
    //             else start = middle + 1;
    //         };
    //     };
        
    //     return -1;
    // };

    // int row, column;

    // int matrix[][N] = {
    //     {-7,5,78,5},
    //     {15,0,26,12},
    //     {18,48,1,36},
    //     {59,4,6,3},
    // };

    // binarySearchVerticals(matrix, 26, &row, &column);

    // printf("row: %d, column: %d\n", row, column);

    // ============================================================================= laboratory 12.6

    // int checkIfMatrixIsSorted(int matrix[R][C]) {
    //     int i, j;
    //     int *oneDimPtr = (int *)matrix;

    //     for (i = 1; i < R * C; i++) {
    //         if (oneDimPtr[i] < oneDimPtr[i - 1]) return 0;
    //     };

    //     return 1;
    // };

    // int matrix[R][C] = {
    //     {-7,0,1},
    //     {5,5,12},
    //     {18,26,36},
    //     {48,59,78},
    // };

    // printf("%d\n", checkIfMatrixIsSorted(matrix));

    // ============================================================================= laboratory 12.7

    // void binarySearchLogRC(int matrix[R][C], int key, int *row, int *column) {
    //     int start = 0, end = R * C - 1, middle;
    //     int *oneDimPtr = (int *)matrix;
    
    //     *row = -1;
    //     *column = -1;

    //     while (start <= end) {
    //         middle = (end - start) / 2 + start;
            
    //         if (oneDimPtr[middle] == key) {
    //            *row = middle / C;
    //             *column = middle % C;
    //             break;
    //         };

    //         if (oneDimPtr[middle] > key) end = middle - 1;
    //         else start = middle + 1;
    //     };
    // };

    // int row, column;

    // int matrix[R][C] = {
    //     {-7,0,1},
    //     {5,5,12},
    //     {18,26,36},
    //     {48,59,78},
    // };

    // binarySearchLogRC(matrix, 26, &row, &column);

    // printf("row: %d, column: %d\n", row, column);

    // ============================================================================= laboratory 12.8

    // int containOneToN(int matrix[N][N]) {
    //     int i, sum = N * N * (N * N + 1) / 2;
    //     int *oneDemMat = (int *)matrix;

    //     for (i = 0; i < N * N; i ++) {
    //         sum -= oneDemMat[i];
    //     };

    //     return sum == 0;
    // };

    // int matrix[N][N] = {
    //     {2,6,9},
    //     {4,8,5},
    //     {1,7,3},
    // };

    // printf("%d\n", containOneToN(matrix));

    // ============================================================================= laboratory 12.9

    // void swap(int *a, int *b) {
    //     int temp = *a;
    //     *a = *b;
    //     *b = temp;
    // };

    // void switchColumns(int matrix[R][C]) {
    //     int i, j;

    //     for (i = 0; i < C; i++) {
    //         for (j = R - 1; j > 0; j--) {
    //             swap(&matrix[j][i], &matrix[j - 1][i]);
    //         };
    //     };
    // };

    // int matrix[R][C] = {
    //     {-7,0,1},
    //     {5,5,12},
    //     {18,26,36},
    //     {48,59,78},
    // };

    // switchColumns(matrix);

    // ============================================================================= laboratory 12.10

    // void turn90Deg(int matrix[N][N]) {
    //     int temp[N][N];
    //     int i, j;

    //     for (i = 0; i < N; i++) {
    //         for (j = 0; j < N; j++) {
    //             temp[j][N - 1 - i] = matrix[i][j];
    //         };
    //     };
    
    //     for (i = 0; i < N; i++) {
    //         for (j = 0; j < N; j++) {
    //             matrix[i][j] = temp[i][j];
    //         };
    //     };
    // };

    // void swap(int *a, int *b) {
    //     int temp = *a;
    //     *a = *b;
    //     *b = temp;
    // };

    // void turn90DegNoTemp(int matrix[N][N]) {
    //     int temp[N][N];
    //     int i, j;

    //     for (i = 1; i < N; i++) {
    //         for (j = 0; j < i; j++) {
    //             swap(&matrix[i][j], &matrix[j][i]);
    //         };
    //     };
    
    //     for (i = 0; i < N; i++) {
    //         for (j = 0; j < N / 2; j++) {
    //             swap(&matrix[i][j], &matrix[i][N - 1 - j]);
    //         };
    //     };
    // };

    // int matrix[N][N] = {
    //     {9,2,4},
    //     {3,7,11},
    //     {3,1,2},
    // };

    // turn90DegNoTemp(matrix);

    // ============================================================================= laboratory 12.11

    return 0;
};
