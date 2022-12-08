#include<stdio.h>
#include<limits.h>
#define SIZE 5

void InputArray(int *arr, int length);
void ArrCalc(int *arr, int length, int *max, int *min, int *sum, double *avg, int *isEven);
int isAscendingListIterative(int *arr, int length, int *isVeryAscending);
int isAscendingListRecursion(int *arr, int length, int *isVeryAscending);
int isSumOfNumberEqualToHisNeighbors(int *arr, int length);
void ReverseListIterative(int *arr, int length);
void ReverseListRecursion(int *arr, int length);

int main() {
    // int arr[SIZE], length = sizeof(arr) / sizeof(int);
    // InputArray(arr, length);

    // ============================================================================= class 8.1

    // int arr[] = {1, 2, 3, 4, 5}, length = sizeof(arr) / sizeof(int);
    // int max = INT_MIN, min = INT_MAX, sum = 0, isEven = 0;
    // double avg = 0;
    // ArrCalc(arr, length, &max, &min, &sum, &avg, &isEven);
    // printf("max: %d min: %d sum: %d isEven: %d avg: %lf\n", max, min, sum, isEven, avg);

    // ============================================================================= class 8.2

    // int arr[] = {1, 2, 3, 4, 5}, length = sizeof(arr) / sizeof(int), isVeryAscending = 1;

    // printf("%d %d\n", isVeryAscending, isAscendingListIterative(arr, length, &isVeryAscending));
    // printf("isVery: %d is: %d\n", isVeryAscending, isAscendingListRecursion(arr, length, &isVeryAscending));

    // ============================================================================= class 8.3

    // int arr[SIZE] = {1, 2, 3, 4, 5}, length = sizeof(arr) / sizeof(int);
    // printf("Result: %d\n", isSumOfNumberEqualToHisNeighbors(arr, length));

    // ============================================================================= class 8.4

    // int i, arr[SIZE] = {1, 2, 3, 4, 5}, length = sizeof(arr) / sizeof(int);
    // ReverseListIterative(arr, length);
    // ReverseListRecursion(arr, length);

    // printf("Reversed list is: ");
    // for (i = 0; i < length; i++) {
    //     printf("%d", arr[i]);
    // };

    // printf("\n");

    // ============================================================================= class 8.5

    return 0;
};

void InputArray(int arr[], int length) {
    int i, j;

    for (i = 0; i < length; i++) {
        printf("Enter a number:\n");
        scanf("%d", &arr[i]);
    };

    for (j = 0; j < length; j++) {
        printf("%d", arr[j]);
    };

    printf("\n");
};

// ============================================================================= class 8.1

void ArrCalc(int arr[], int length, int *max, int *min, int *sum, double *avg, int *isEven) {
    int i;

    for (i = 0; i < length; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        };

        if (arr[i] < *min) {
            *min = arr[i];
        };

        if (arr[i] % 2 == 0) {
            *isEven = 1;
        };

        *sum += arr[i];
    };

    *avg = *sum / length;
};

// ============================================================================= class 8.2

int isAscendingListIterative(int arr[], int length, int *isVeryAscending) {
    int i, nextNumber, currentNumber;
    
    for (i = 0; i < length - 1; i++) {
        currentNumber = arr[i];
        nextNumber = arr[i + 1];
    
        if (nextNumber < currentNumber) {
            *isVeryAscending = 0;
            return 0;
        } else if (nextNumber > currentNumber && *isVeryAscending != 0) {
            *isVeryAscending = 1;
        } else if (nextNumber == currentNumber) {
            *isVeryAscending = 0;
        };
    };

    return 1;
};

int isAscendingListRecursion(int arr[], int length, int *isVeryAscending) {
    if (length == 0) return 1;

    if (arr[1] < arr[0]) {
        *isVeryAscending = 0;
        return 0;
    } else if (arr[1] > arr[0] && *isVeryAscending != 0) {
        *isVeryAscending = 1;
    } else if (arr[1] == arr[0]) {
        *isVeryAscending = 0;
    };

    if (length == 2) {
        if (arr[1] > arr[0]) return 1;
        else if (arr[1] == arr[0]) return 1;
    };

    return isAscendingListRecursion(arr + 1, length - 1, isVeryAscending);
};

// ============================================================================= class 8.3

int isSumOfNumberEqualToHisNeighbors(int arr[], int length) {
    int i;

    for (i = 0; i < length; i++) {
        if (i == 0) {
            if (arr[0] == arr[1]) return 1;
        };

        if (i > 0 && i < length - 1) {
            if (arr[i] == arr[i - 1] + arr[i + 1]) return 1;
        };

        if (i == length - 1) {
            if (arr[i] == arr[i - 1]) return 1;
        };
    };

    return 0;
};

// ============================================================================= class 8.4

void ReverseListIterative(int arr[], int length) {
    int i, numberFromStart, numberFromEnd;

    for (i = 0; i < length / 2; i++) {
        numberFromStart = arr[i];
        numberFromEnd = arr[length - 1 - i];
        arr[i] = numberFromEnd;
        arr[length - 1 - i] = numberFromStart;
    };
};

void ReverseListRecursion(int arr[], int length) {
    int numberFromStart, numberFromEnd;

    numberFromStart = arr[0];
    numberFromEnd = arr[length - 1];
    arr[0] = numberFromEnd;
    arr[length - 1] = numberFromStart;

    if (length >= 2) {
        ReverseListRecursion(arr + 1, length - 2);
    };
};

// ============================================================================= class 8.5
