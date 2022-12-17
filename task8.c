#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<assert.h>

int main () {

    // double *getListNumbers(int size) {
    //     int i;
    //     double *numbers = (double *)calloc(size, sizeof(double));

    //     if (numbers != NULL) {
    //         for (i = 0; i < size; i++) {
    //             printf("Enter a number:\n");
    //             scanf("%lf", &numbers[i]);
    //         };
    //     };

    //     return numbers;
    // };

    // ============================================================================= class 8.1

    // int *getFibListNumbers(int n) {
    //     int i;
    //     int *fibList = calloc(n + 1, sizeof(int));

    //     if (fibList != NULL) {
    //         for (i = 0; i < n + 1; i++) {
    //             if (i > 1) {
    //                 fibList[i] = fibList[i - 1] + fibList[i - 2];
    //             } else {
    //                 fibList[i] = i;
    //             };
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

    //     if (tempList != NULL) {
    //         for (i = 0; i < n; i++) {
    //             item = arr[i];
    //             tempList[item]++;
    //         };

    //         for (j = 0; j < n; j++) {
    //             item = arr[j];
    //             if (item != tempList[item]) return 0;
    //         };

    //         free(tempList);
    //         tempList = NULL;

    //         return 1;
    //     };
    // };


    // printf("%d\n", checkNumberRepeated(arr, size, 4));

    // ============================================================================= class 8.4

    // int arr[] = {5,5,1,4,4,4,7,7}, size = sizeof(arr) / sizeof(int);

    // int getDifference(int arr[], int n, int a, int b) {
    //     int i, j, item, maxItem = INT_MIN, minItem = INT_MAX, max = 0, min = 0;
    //     int *tempList = (int *)calloc(b + 1, sizeof(int));

    //     if (tempList != NULL) {
    //         for (i = 0; i < n; i++) {
    //             item = arr[i];
    //             tempList[item]++;
    //         };

    //         for (j = 0; j < b + 1; j++) {
    //             item = arr[j];

    //             if (b >= item && item >= a) {
    //                 if (tempList[item] > maxItem) {
    //                     maxItem = tempList[item];
    //                     max = item;
    //                 } else if (tempList[item] == maxItem && item > max) {
    //                     max = item;
    //                 } else if (tempList[item] < minItem) {
    //                     minItem = tempList[item];
    //                     min = item;
    //                 } else if (tempList[item] == minItem && item < min) {
    //                     min = item;
    //                 };
    //             };
    //         };

    //         free(tempList);
    //         tempList = NULL;
    //     };

    //     return max - min;
    // };

    // printf("%d\n", getDifference(arr, size, 1, 9));

    // ============================================================================= class 8.5

    // int *getLucasSeries(int n) {
    //     int i;
    //     int *lucasSeries = (int *)calloc(n + 1, sizeof(int));

    //     if (lucasSeries != NULL) {
    //         for (i = 0; i < n + 1; i++) {
    //             if (i == 0) {
    //                 lucasSeries[i] = 2;
    //             } else if (i == 1) {
    //                 lucasSeries[i] = 1;
    //             } else {
    //                 lucasSeries[i] = lucasSeries[i - 1] + lucasSeries[i - 2];
    //             };
    //         };
    //     };
    
    //     return lucasSeries;
    // };

    // ============================================================================= laboratory 8.1

    // int *getEvenOrOddNumbers(int arr[], int n, int isEven, int *counter) {
    //     int sizeOfNumbers = 1;
    //     int *numbers = (int *)calloc(sizeOfNumbers, sizeof(int));
    //     int *tempNumbers = NULL;
    //     int i;

    //     if (numbers != NULL) {
    //         for (i = 0; i < n; i++) {

    //             if (isEven == 1 && arr[i] % 2 == 0) {
    //                 sizeOfNumbers++;
    //                 tempNumbers = (int *)realloc(numbers, sizeof(int) * sizeOfNumbers);
    //                 assert(tempNumbers);

    //                 numbers = tempNumbers;
    //                 numbers[*counter] = arr[i];
    //                 *counter += 1;
    //             } else if (isEven != 1 && arr[i] % 2 != 0) {
    //                 sizeOfNumbers++;
    //                 tempNumbers = (int *)realloc(numbers, sizeof(int) * sizeOfNumbers);
    //                 assert(tempNumbers);

    //                 numbers = tempNumbers;
    //                 numbers[*counter] = arr[i];
    //                 *counter += 1;
    //             };
    //         };
    //     };

    //     tempNumbers = NULL;
    //     return numbers;
    // };

    // ============================================================================= laboratory 8.2

    // int *getMultiVector(int a[], int b[]) {
    //     int *vector = (int *)calloc(3, sizeof(int));
    //     assert(vector);

    //     vector[0] = b[1] * a[2] - b[2] * a[1]; 
    //     vector[1] = (b[0] * a[2] - b[2] * a[0]) * -1;
    //     vector[2] = b[0] * a[1] - b[1] * a[0];
    
    //     return vector;
    // };

    // ============================================================================= laboratory 8.3

    // int *updateList(int arr[], int size) {
    //     int *result = (int *)calloc(size, sizeof(int)), i, j, sum = 1;
    //     assert(result);

    //     for (i = 0; i < size; i++) {            
    //         for (j = 0; j < size; j++) {
    //             if (j != i) {
    //                 sum *= arr[j];
    //             };
    //         };

    //         result[i] = sum;
    //         sum = 1;
    //     };

    //     return result;
    // };

    // ============================================================================= laboratory 8.4

    // int *addMissingNumbers(int arr[], int size, int *counter) {
    //     int item, i, j;
    //     int *newList = NULL;
    //     int *tempList = (int *)calloc(size + 1, sizeof(int));
    //     assert(tempList);

    //     for (i = 0; i < size; i++) {
    //         item = arr[i];
    //         tempList[item]++;
    //     };

    //     for (j = 0; j < size + 1; j++) {
    //         if (tempList[j] == 0) {
    //             tempList[*counter] = j;
    //             (*counter)++;
    //         };
    //     };

    //     newList = (int *)realloc(tempList, *counter * sizeof(int));
    //     assert(newList);
    //     tempList = NULL;
    //     return newList;
    // };

    // ============================================================================= laboratory 8.5

    // int checkIfMostListContainingSameNumber(int arr[], int size) {
    //     int maxRepeated = INT_MIN, maxRepeatedNumber, item, i, j;
    //     int *tempList = (int *)calloc(size + 1, sizeof(int));
    //     assert(tempList);

    //     for (i = 0; i < size; i++) {
    //         item = arr[i];
    //         tempList[item]++;
    //     };

    //     for (j = 0; j < size + 1; j++) {
    //         if (tempList[j] > maxRepeated) {
    //             maxRepeated = tempList[j];
    //             maxRepeatedNumber = j;
    //         };
    //     };

    //     free(tempList);
    //     tempList = NULL;

    //     if (maxRepeated > size / 2) return maxRepeatedNumber;
    //     return -1;
    // };

    // ============================================================================= laboratory 8.6

    // int getMaxSumOfRepeatedNumber(int arr[], int size) {
    //     int maxRepeatedSum = INT_MIN, maxSumRepeatedNumber, item, i, j;
    //     int *tempList = (int *)calloc(size + 1, sizeof(int));
    //     assert(tempList);

    //     for (i = 0; i < size; i++) {
    //         item = arr[i];
    //         tempList[item] += item;
    //     };

    //     for (j = 0; j < size + 1; j++) {
    //         if (tempList[j] > maxRepeatedSum) {
    //             maxRepeatedSum = tempList[j];
    //             maxSumRepeatedNumber = j;
    //         } else if (tempList[j] == maxRepeatedSum) {
    //             if (j > maxSumRepeatedNumber) maxSumRepeatedNumber = j;
    //         };
    //     };

    //     free(tempList);
    //     tempList = NULL;

    //     return maxSumRepeatedNumber;
    // };

    // ============================================================================= laboratory 8.7

    // int getLargestMissingNumber(int arr[], int size) {
    //     int i, j, item, maxNumber = INT_MIN;
    //     int *tempList = (int *)calloc(size + 1, sizeof(int));
    //     assert(tempList);

    //     for (i = 0; i < size; i++) {
    //         item = arr[i];
    //         tempList[item]++;
    //     };

    //     for (j = 0; j < size + 1; j++) {
    //         if (tempList[j] == 0) {
    //             maxNumber = j;
    //         };
    //     };

    //     free(tempList);
    //     tempList = NULL;

    //     return maxNumber;
    // };

    // ============================================================================= laboratory 8.8

    // void TurnTheArray(int arr[], int size, int amount) {
    //     int i, j, k, numberOfRounds = amount % size;
    //     int *tempList = (int *)calloc(size, sizeof(int));
    //     assert(tempList);

    //     for (i = 0; i < size - numberOfRounds; i++) {
    //         tempList[i + numberOfRounds] = arr[i];
    //     };

    //     for (j = 0; j < numberOfRounds; j++) {
    //         tempList[j] = arr[size - numberOfRounds + j];
    //     };

    //     for (k = 0; k < size; k++) {
    //         arr[k] = tempList[k];
    //     };

    //     free(tempList);
    //     tempList = NULL;
    // };

    // ============================================================================= laboratory 8.9

    // int *replaceArrayItems(int arr[], int size) {
    //     int i, j, item1, item2;
    //     int *tempList = (int *)calloc(size, sizeof(int));
    //     assert(tempList);

    //     for (i = 0; i < size; i++) {
    //         if (i == size - 1) {
    //             tempList[i] = -1;
    //         };

    //         item1 = arr[i];

    //         for (j = i + 1; j < size; j++) {
    //             item2 = arr[j];

    //             if (item2 > item1) {
    //                 tempList[i] = item2;
    //                 break;
    //             };

    //             if (j == size - 1){
    //                 tempList[i] = -1;
    //             };
    //         };
    //     };

    //     return tempList;
    // };

    // ============================================================================= laboratory 8.10

    // int getMaxNumber(int number) {
    //     if (number == 0) return 0;

    //     int maxNumber = getMaxNumber(number / 10);
    //     if (number % 10 > maxNumber) return number % 10;
    //     return maxNumber;
    // };

    // printf("%d\n", getMaxNumber(38479585));

    // ============================================================================= additional 8.1

    // void ReverseArray(int arr[], int size) {
    //     int start, end;
        
    //     start = arr[0];
    //     end = arr[size - 1];
    //     arr[0] = end;
    //     arr[size - 1] = start;

    //     if (size >= 2) {
    //         ReverseArray(arr + 1, size - 2);
    //     };
    // };

    // ============================================================================= additional 8.2

    // int isPalindrome(int arr[], int size) {
    //     if (size < 2) return 1;

    //     if (arr[0] == arr[size - 1]) return isPalindrome(arr + 1, size - 2);
    //     else return 0;
    // };

    // int arr[] = {1,3,2,3,1}, size = sizeof(arr) / sizeof(int);

    // printf("%d\n", isPalindrome(arr, size));

    // ============================================================================= additional 8.3

    // int isArraySorted(int arr[], int size) {
    //     if (size < 2) return 1;
    //     if (arr[1] >= arr [0]) return isArraySorted(arr + 1, size - 1);
    //     return 0;
    // };

    // int arr[] = {1,3,5,6,11}, size = sizeof(arr) / sizeof(int);

    // printf("%d\n", isArraySorted(arr, size));

    // ============================================================================= additional 8.4

    // int getSum(int arr[], int size) {
    //     int max;

    //     if (size <= 2) return arr[0] + arr[1];

    //     max = getSum(arr + 1, size - 1);

    //     if (arr[0] + arr[1] > max) return arr[0] + arr[1];
    //     return max; 
    // };

    // int arr[] = {3,8,10,5,-7,7,9,-2,13}, size = sizeof(arr) / sizeof(int);

    // printf("%d\n", getSum(arr, size));

    // ============================================================================= additional 8.5

    return 0;
};