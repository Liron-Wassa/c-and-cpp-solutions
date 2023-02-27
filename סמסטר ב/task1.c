#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main() {
    // int *removeDuplicateFromSortedList1(int arr[], int size) {
    //     int i, j = 1, uniqueValues = 1, prevValue = arr[0], *newList = NULL;

    //     for (i = 1; i < size; i++) {
    //         if (prevValue != arr[i]) uniqueValues++;
    //         prevValue = arr[i];
    //     };

    //     prevValue = arr[0];
    //     newList = (int *)calloc(uniqueValues, sizeof(int));
    //     newList[0] = prevValue;
    //     assert(newList);

    //     for (i = 1; i < size; i++) {
    //         if (prevValue != arr[i]) newList[j++] = arr[i];
    //         prevValue = arr[i];
    //     };

    //     return newList;
    // };

    // int *removeDuplicateFromSortedList2(int arr[], int size) {
    //     int i, j = 1, prevValue = arr[0], counter = 1, *newList = NULL;

    //     prevValue = arr[0];
    //     newList = (int *)calloc(size, sizeof(int));
    //     newList[0] = prevValue;
    //     assert(newList);

    //     for (i = 1; i < size; i++) {
    //         if (prevValue != arr[i]) {
    //             newList[j++] = arr[i];
    //             counter++;
    //         };

    //         prevValue = arr[i];
    //     };
    
    //     newList = (int *)realloc(newList, sizeof(int) * counter);
    //     assert(newList);

    //     return newList;
    // };

    // int i;
    // int arr[] = { 50, 50, 50, 50 };
    // int size = sizeof(arr) / sizeof(int);
    // int *newList = removeDuplicateFromSortedList2(arr, size);

    // for (i = 0; i < size; i++) {
    //     printf("%d,", arr[i]);
    // };

    // printf("\n");

    // for (i = 0; i < 5; i++) {
    //     printf("%d,", newList[i]);
    // };

    // free(newList);

    // printf("\n");

    // ============================================================================= class 1.1

    // int *getEvenOdd1(int arr[], int size, int **odd) {
    //     int counterOdd = 0, counterEven = 0, *even = NULL;
    //     int i, j = 0, k = 0;

    //     for (i = 0; i < size; i++) {
    //         if (arr[i] % 2 == 0) counterEven++;
    //         else counterOdd++;
    //     };

    //     even = (int *)calloc(counterEven, sizeof(int));
    //     assert(even);
    //     *odd = (int *)calloc(counterOdd, sizeof(int));
    //     assert(*odd);

    //     for (i = 0; i < size; i++) {
    //         if (arr[i] % 2 == 0) even[j++] = arr[i];
    //         else (*odd)[k++] = arr[i];
    //     };

    //     return even;
    // };

    // int *getEvenOdd2(int arr[], int size, int **odd) {
    //     int counterOdd = 0, counterEven = 0, *even = NULL;
    //     int i, j = 0, k = 0;

    //     even = (int *)calloc(size, sizeof(int));
    //     assert(even);
    //     *odd = (int *)calloc(size, sizeof(int));
    //     assert(*odd);

    //     for (i = 0; i < size; i++) {
    //         if (arr[i] % 2 == 0) {
    //             counterOdd++;
    //             even[j++] = arr[i];
    //         }
    //         else {
    //             counterEven++;
    //             (*odd)[k++] = arr[i];
    //         };
    //     };

    //     even = (int *)realloc(even, sizeof(int) * (size - counterEven));
    //     assert(even);
    //     *odd = (int *)realloc(*odd, sizeof(int) * (size - counterOdd));
    //     assert(*odd);

    //     return even;
    // };

    // int arr[] = { 6, 57, 14, 21, 11, 3, 22, 42 ,9 ,15 }, *odd = NULL;
    // int size = sizeof(arr) / sizeof(int);
    // int i;

    // int *evenResults = getEvenOdd2(arr, size, &odd);

    // for (i = 0; i < 4; i++) {
    //     printf("%d,", evenResults[i]);
    // }

    // free(evenResults);

    // printf("\n");

    // for (i = 0; i < 6; i++) {
    //     printf("%d,", odd[i]);
    // }

    // free(odd);

    // ============================================================================= class 1.2

    return 0;
}