#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main () {

    // double *getListNumbers(int size) {
    //     int i;
    //     double *numbers = (double *)calloc(size, sizeof(double));

    //     for (i = 0; i < size; i++) {
    //         printf("Enter a number:\n");
    //         scanf("%lf", &numbers[i]);
    //     };

    //     return numbers;
    // };

    // ============================================================================= class 8.1

    // int *getFibListNumbers(int n) {
    //     int i;
    //     int *fibList = calloc(n + 1, sizeof(int));

    //     for (i = 0; i < n + 1; i++) {
    //         if (i > 1) {
    //             fibList[i] = fibList[i - 1] + fibList[i - 2];
    //         } else {
    //             fibList[i] = i;
    //         };
    //     };

    //     return fibList;
    // };

    // ============================================================================= class 8.2

    // int counter = 0, mostRepeatedNumber;
    // int arr[] = {1,6,3,3,6,3,3}, size = sizeof(arr) / sizeof(int);

    // int getRepeatedNumber(int arr[], int size, int *counter) {
    //     int i, j, currentRepeatedNumber, item;
    //     int tempList[10] = {0};

    //     for (i = 0; i < size; i++) {
    //         item = arr[i];
    //         tempList[item]++;
    //     };

    //     for (j = 0; j < 10; j++) {
    //         if (tempList[j] > *counter) {
    //             *counter = tempList[j];
    //             currentRepeatedNumber = j;
    //         };
    //     };

    //     return currentRepeatedNumber;
    // };

    // mostRepeatedNumber = getRepeatedNumber(arr, size, &counter);
    // printf("Most repeated number id: %d Number of repeating is: %d\n", mostRepeatedNumber, counter);

    // ============================================================================= class 8.3

    // int arr[] = {1,4,4,3,4,2,2,3,3,4}, size = sizeof(arr) / sizeof(int);

    // int checkNumberRepeated(int arr[], int n, int k) {
    //     int i, j, item;
    //     int *tempList = (int *)calloc(k + 1, sizeof(int));

    //     for (i = 0; i < n; i++) {
    //         item = arr[i];
    //         tempList[item]++;
    //     };

    //     for (j = 0; j < n; j++) {
    //         item = arr[j];
    //         if (item != tempList[item]) return 0;
    //     };

    //     free(tempList);
    //     return 1;
    // };


    // printf("%d\n", checkNumberRepeated(arr, size, 4));

    // ============================================================================= class 8.4

    // int arr[] = {5,5,1,4,4,4,7,7}, size = sizeof(arr) / sizeof(int);

    // int getDifference(int arr[], int n, int a, int b) {
    //     int i, j, item, maxItem = INT_MIN, minItem = INT_MAX, max = 0, min = 0;
    //     int *tempList = (int *)calloc(b + 1, sizeof(int));

    //     for (i = 0; i < n; i++) {
    //         item = arr[i];
    //         tempList[item]++;
    //     };

    //     for (j = 0; j < b + 1; j++) {
    //         item = arr[j];

    //         if (b >= item && item >= a) {
    //             if (tempList[item] > maxItem) {
    //                 maxItem = tempList[item];
    //                 max = item;
    //             } else if (tempList[item] == maxItem && item > max) {
    //                 max = item;
    //             } else if (tempList[item] < minItem) {
    //                 minItem = tempList[item];
    //                 min = item;
    //             } else if (tempList[item] == minItem && item < min) {
    //                 min = item;
    //             };
    //         };
    //     };

    //     free(tempList);
    //     return max - min;
    // };

    // printf("%d\n", getDifference(arr, size, 1, 9));

    // ============================================================================= class 8.5

    return 0;
};