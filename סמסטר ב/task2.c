#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

int main () {

    // int *getOddEven(int A[], int size, int *sizeEven, int *sizeOdd, int **odd) {
    //     int i, j = 0, k = 0, *even = NULL;
    //     *sizeEven = *sizeOdd = 0;

    //     for (i = 0; i < size; i++) {
    //         if (A[i] % 2 == 0) *sizeEven += 1;
    //         else *sizeOdd += 1;
    //     };

    //     even = (int *)calloc(*sizeEven, sizeof(int));
    //     assert(even);
    //     *odd = (int *)calloc(*sizeOdd, sizeof(int));
    //     assert(*odd);

    //     for (i = 0; i < size; i++) {
    //         if (A[i] % 2 == 0) {
    //             even[j++] = A[i];   
    //         } else {
    //             (*odd)[k++] = A[i];   
    //         };
    //     };

    //     return even;
    // };

    // int arr[] = {1,2,3,4,5,6,7,8,9,10}, size = sizeof(arr) / sizeof(int);

    // int *odd = NULL, sizeEven, sizeOdd, i;
    // int *even = getOddEven(arr, size, &sizeEven, &sizeOdd, &odd);

    // printf("odd: %d ", sizeOdd);

    // for (i = 0; i < 5; i++) {
    //     printf("%d,", odd[i]);
    // };
    
    // free(odd);

    // printf("\n");

    // printf("even: %d ", sizeEven);
    // for (i = 0; i < 5; i++) {
    //     printf("%d,", even[i]);
    // };

    // free(even);

    // printf("\n");

    // ============================================================================= class 2.1

    // void splitLettersArray(char letters[], int size, char **lowerCase, char **capitalCase) {
    //     int i, j = 0, k = 0;

    //     for (i = 0; i < size; i++) {
    //         if (letters[i] >= 'a' && letters[i] <= 'z') j++;
    //         else k++;
    //     };

    //     *lowerCase = (char *)calloc(j, sizeof(char));
    //     assert(*lowerCase);
    //     *capitalCase = (char *)calloc(k, sizeof(char));
    //     assert(*capitalCase);

    //     j = k = 0;

    //     for (i = 0; i < size; i++) {
    //         if (letters[i] >= 'a' && letters[i] <= 'z') {
    //             (*lowerCase)[j++] = letters[i];
    //         } else {
    //             (*capitalCase)[k++] = letters[i];
    //         }
    //     };
    // };
    
    // char letters[] = {'a', 'B', 'c', 'D', 'e', 'F', 'g'};
    // int i, size = sizeof(letters) / sizeof(char);

    // char *lowerCase = NULL, *capitalCase = NULL;
    // splitLettersArray(letters, size, &lowerCase, &capitalCase);

    // printf("capital: ");

    // for (i = 0; i < 3; i++) {
    //     printf("%c,", capitalCase[i]);
    // };
    
    // free(capitalCase);

    // printf("\n");

    // printf("lower: ");
    // for (i = 0; i < 4; i++) {
    //     printf("%c,", lowerCase[i]);
    // };

    // free(lowerCase);

    // printf("\n");
    
    // ============================================================================= class 2.2

    // void splitLettersChar(char *string, char **lowerCase, char **capitalCase) {
    //     int i, j = 0, k = 0, size = strlen(string);

    //     for (i = 0; i < size; i++) {
    //         if (string[i] >= 'a' && string[i] <= 'z') j++;
    //         else k++;
    //     };

    //     *lowerCase = (char *)calloc(j + 1, sizeof(char));
    //     assert(*lowerCase);
    //     *capitalCase = (char *)calloc(k + 1, sizeof(char));
    //     assert(*capitalCase);

    //     j = k = 0;

    //     for (i = 0; i < size; i++) {
    //         if (string[i] >= 'a' && string[i] <= 'z') {
    //             (*lowerCase)[j++] = string[i];
    //         } else {
    //             (*capitalCase)[k++] = string[i];
    //         }
    //     };

    //     (*lowerCase)[j] = '\0';
    //     (*capitalCase)[k] = '\0';
    // };
    
    // char string[] = "aBcDeFg";
    // int i;

    // char *lowerCase = NULL, *capitalCase = NULL;
    // splitLettersChar(string, &lowerCase, &capitalCase);

    // printf("capital: ");
    // printf("%s", capitalCase);
    
    // free(capitalCase);

    // printf("\n");

    // printf("lower: ");
    // printf("%s", lowerCase);

    // free(lowerCase);

    // printf("\n");

    // ============================================================================= class 2.3

    // void printArr(int arr[], int size) {
    //     int i;

    //     for (i = 0; i < size; i++) {
    //         printf("%d,", arr[i]);
    //     };

    //     printf("\n");
    // };
    
    // int *removeDuplicateV1 (int arr[], int size, int *uniqueSize) {
    //     int prevValue = arr[0], i, j = 1, *uniques = NULL;
    //     *uniqueSize = 1;

    //     for (i = 1; i < size; i++) {
    //         if (prevValue != arr[i]) *uniqueSize += 1;
    //         prevValue = arr[i];
    //     };

    //     uniques = (int *)calloc(*uniqueSize, sizeof(int));
    //     assert(uniques);

    //     prevValue = arr[0];
    //     uniques[0] = prevValue;

    //     for (i = 1; i < size; i++) {
    //         if (prevValue != arr[i]) uniques[j++] = arr[i];
    //         prevValue = arr[i];
    //     };

    //     return uniques;
    // };

    // int removeDuplicateV2 (int arr[], int size, int **uniques) {
    //     int prevValue = arr[0], i, j = 1, counter = 1;

    //     for (i = 1; i < size; i++) {
    //         if (prevValue != arr[i]) counter++;
    //         prevValue = arr[i];
    //     };

    //     *uniques = (int *)calloc(counter, sizeof(int));
    //     assert(*uniques);

    //     prevValue = arr[0];
    //     (*uniques)[0] = prevValue;

    //     for (i = 1; i < size; i++) {
    //         if (prevValue != arr[i]) (*uniques)[j++] = arr[i];
    //         prevValue = arr[i];
    //     };

    //     return counter;
    // };

    // int removeDuplicateV3 (int arr[], int size, int *uniqueSize, int **uniques) {
    //     int prevValue = arr[0], i, j = 1;
    //     *uniqueSize = 1;

    //     for (i = 1; i < size; i++) {
    //         if (prevValue != arr[i]) *uniqueSize += 1;
    //         prevValue = arr[i];
    //     };

    //     *uniques = (int *)calloc(*uniqueSize, sizeof(int));
    //     assert(*uniques);

    //     prevValue = arr[0];
    //     (*uniques)[0] = prevValue;

    //     for (i = 1; i < size; i++) {
    //         if (prevValue != arr[i]) (*uniques)[j++] = arr[i];
    //         prevValue = arr[i];
    //     };
    // };

    // int numbers[] = {50,60,60,72,81,81,81,81,93,93}, size = sizeof(numbers) / sizeof(int);
    // int *uniques = NULL, uniqueSize;

    // removeDuplicateV3(numbers, size, &uniqueSize, &uniques);
    // printf("uniques: %d\n", uniqueSize);
    // printArr(uniques, 5);
    // free(uniques);  

    // ============================================================================= class 2.4

    return 0;
};