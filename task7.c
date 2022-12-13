#include<stdio.h>
#include<limits.h>
#include<math.h>
#define SIZE 5

void InputArray(int arr[], int length);
void ArrCalc(int arr[], int length, int *max, int *min, int *sum, double *avg, int *isEven);
int isAscendingListIterative(int arr[], int length, int *isVeryAscending);
int isAscendingListRecursion(int arr[], int length, int *isVeryAscending);
int isSumOfNumberEqualToHisNeighbors(int arr[], int length);
void ReverseListIterative(int arr[], int length);
void ReverseListRecursion(int arr[], int length);
void ReplaceValues(int *num1Ptr, int *num2Ptr, int *num3Ptr);
double calculateAverage(int num, int digit, int *counterOfSmallestNumbers);
double calculateDerivative(double n, double x, double c, double *nPtr, double *cPtr);
int sumOfTwoMaxNumbers(int arr[], int length);
int checkIfSumOfTwoNumbersIsSmallestThanKey(int arr[], int length, int key, int *digit1, int *digit2);
void MaxMax(int arr[], int length, int *maxEven, int *even, int *maxOdd, int *odd);
int isPalindromeIterative(int arr[], int length);
int isPalindromeRecursion(int arr[], int length);
void RegularPrint(int arr[], int length);
void ReversePrint(int arr[], int length);
double calculateAverageRecursion(int arr[], int length);
int checkNumbersOrders(double arr[], int length);
int isSuperArrayIterative(int arr[], int length);
int isSuperArrayRecursion(int arr[], int length);

int main() {
    // int arr[SIZE], length = sizeof(arr) / sizeof(int);
    // InputArray(arr, length);

    // ============================================================================= class 7.1

    // int arr[] = {1, 2, 3, 4, 5}, length = sizeof(arr) / sizeof(int);
    // int max = INT_MIN, min = INT_MAX, sum = 0, isEven = 0;
    // double avg = 0;
    // ArrCalc(arr, length, &max, &min, &sum, &avg, &isEven);
    // printf("max: %d min: %d sum: %d isEven: %d avg: %lf\n", max, min, sum, isEven, avg);

    // ============================================================================= class 7.2

    // int arr[] = {1, 2, 3, 4, 5}, length = sizeof(arr) / sizeof(int), isVeryAscending = 1;

    // printf("%d %d\n", isVeryAscending, isAscendingListIterative(arr, length, &isVeryAscending));
    // printf("isVery: %d is: %d\n", isVeryAscending, isAscendingListRecursion(arr, length, &isVeryAscending));

    // ============================================================================= class 7.3

    // int arr[SIZE] = {1, 2, 3, 4, 5}, length = sizeof(arr) / sizeof(int);
    // printf("Result: %d\n", isSumOfNumberEqualToHisNeighbors(arr, length));

    // ============================================================================= class 7.4

    // int i, arr[SIZE] = {1, 2, 3, 4, 5}, length = sizeof(arr) / sizeof(int);
    // ReverseListIterative(arr, length);
    // ReverseListRecursion(arr, length);

    // printf("Reversed list is: ");
    // for (i = 0; i < length; i++) {
    //     printf("%d", arr[i]);
    // };

    // printf("\n");

    // ============================================================================= class 7.5
     
    // int num1Ptr = 6, num2Ptr = 9, num3Ptr = 1;
    // ReplaceValues(&num1Ptr, &num2Ptr, &num3Ptr);
    // printf("Num1: %d Num2: %d Num3: %d\n", num1Ptr, num2Ptr, num3Ptr);

    // ============================================================================= laboratory 7.1

    // int counterOfSmallestNumbers = 0;
    // double averageNumber = calculateAverage(9, 3, &counterOfSmallestNumbers);
    // printf("average: %lf counter: %d\n", averageNumber, counterOfSmallestNumbers);

    // ============================================================================= laboratory 7.2

    // double nPtr, cPtr;
    // double derivative = calculateDerivative(3, 2, 4, &nPtr, &cPtr);
    // printf("Derivative is: %lf n: %lf c: %lf\n", derivative, nPtr, cPtr); 

    // ============================================================================= laboratory 7.3

    // int arr[SIZE] = {1, 2, 3, 4, 5}, length = sizeof(arr) / sizeof(int);
    // printf("Max sum is: %d\n", sumOfTwoMaxNumbers(arr, length));

    // ============================================================================= laboratory 7.4
    
    // int arr[SIZE] = {1,6,2,4,3}, length = sizeof(arr) / sizeof(int), digit1, digit2;
    // int result = checkIfSumOfTwoNumbersIsSmallestThanKey(arr, length, 3, &digit1, &digit2);

    // printf("Result is: %d digit1: %d digit2: %d\n", result, digit1, digit2);

    // ============================================================================= laboratory 7.5

    // int arr[SIZE] = {1, 2, 3, 4, 5}, length = sizeof(arr)/ sizeof(int);
    // int maxEven = INT_MIN, even = 0, maxOdd = INT_MIN, odd = 0;

    // MaxMax(arr, length, &maxEven, &even, &maxOdd, &odd);
    // printf("MaxEven: %d, Even: %d, MaxOdd: %d, Odd: %d", maxEven, even, maxOdd, odd);

    // ============================================================================= laboratory 7.6

    // int arr[SIZE] = {1,3,2,3,1}, length = sizeof(arr)/ sizeof(int);
    // printf("is a palindrome iterative %d\n", isPalindromeIterative(arr, length));
    // printf("is a palindrome recursion %d\n", isPalindromeRecursion(arr, length));

    // ============================================================================= laboratory 7.7

    // int arr[SIZE] = {1, 2, 3, 4, 5}, length = sizeof(arr) / sizeof(int);
    // RegularPrint(arr, length);
    // printf("\n");
    // ReversePrint(arr, length);
    // printf("\n");

    // ============================================================================= laboratory 7.8

    // int arr[] = {1,3,3,1}, length = sizeof(arr)/ sizeof(int);
    // printf("Average is: %lf\n", calculateAverageRecursion(arr, length));

    // ============================================================================= laboratory 7.9

    // double arr[SIZE] = {1.7, 2.65, 2.5, 4.1, 5.0}, length = sizeof(arr)/ sizeof(double);
    // printf("%d\n", checkNumbersOrders(arr, length));

    // ============================================================================= laboratory 7.10

    int arr[] = {1,2,5,9,20,40}, length = sizeof(arr) / sizeof(int);
    // printf("%d\n", isSuperArrayIterative(arr, length));
    printf("%d\n", isSuperArrayRecursion(arr, length));

    // ============================================================================= laboratory 7.11

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

// ============================================================================= class 7.1

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

// ============================================================================= class 7.2

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

// ============================================================================= class 7.3

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

// ============================================================================= class 7.4

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

// ============================================================================= class 7.5

void ReplaceValues(int *num1Ptr, int *num2Ptr, int *num3Ptr) {
    int tempNum;

    if (*num3Ptr > *num1Ptr && *num3Ptr > *num2Ptr) {
        tempNum = *num1Ptr;
        *num1Ptr = *num3Ptr;
        *num3Ptr = tempNum;
    } else if (*num2Ptr > *num1Ptr && *num2Ptr > *num3Ptr) {
        tempNum = *num2Ptr;
        *num1Ptr = *num2Ptr;
        *num2Ptr = tempNum;
    };

    if (*num2Ptr < *num1Ptr) {
        tempNum = *num2Ptr;
        *num3Ptr = *num2Ptr;
        *num2Ptr = tempNum;
    };
};

// ============================================================================= laboratory 7.1

double calculateAverage(int num, int digit, int *counterOfSmallestNumbers) {
    int tempDigit, sum = 0;
    double counter = 0;

    if (num < 0) num *= -1;
    if (num == 0 && digit > num) counter = 1;

    while (num > 0) {
        tempDigit = num % 10;

        if (tempDigit < digit) {
            sum += tempDigit;
            counter++;
        };

        num /= 10;
    };

    *counterOfSmallestNumbers = counter;
    if (counter > 0) return sum / counter;
};

// ============================================================================= laboratory 7.2

double calculateDerivative(double n, double x, double c, double *nPtr, double *cPtr) {
    *cPtr = n * c;
    * nPtr = n - 1;
    return *cPtr * pow(x, *nPtr);
};

// ============================================================================= laboratory 7.3

int sumOfTwoMaxNumbers(int arr[], int length) {
    int i, maxSum = arr[0] + arr[1], tempSum;

    for (i = 1; i < length; i++) {
        tempSum = arr[i] + arr[i + 1];
        if (tempSum > maxSum) {
            maxSum = tempSum;
        };
    };

    return maxSum;
};

// ============================================================================= laboratory 7.4

int checkIfSumOfTwoNumbersIsSmallestThanKey(int arr[], int length, int key, int *digit1, int *digit2) {
    int i, j, counter = 0, tempSum;

    for (i = 0; i < length; i++) {
        for (j = i + 1; j < length; j++) {
            tempSum = arr[i] + arr[j];
            
            if (tempSum < key) {
                *digit1 = arr[i];
                *digit2 = arr[j];
                return 1;
            };
        };
    };

    *digit1 = -1;
    *digit2 = -1;
    return 0;
};

// ============================================================================= laboratory 7.5

void MaxMax(int arr[], int length, int *maxEven, int *even, int *maxOdd, int *odd) {
    int i, isEvenNumber = 0, isOddNumber = 0;

    for (i = 0; i < length; i++) {
        if (arr[i] % 2 == 0) {
            if (arr[i] > *maxEven) {
                *maxEven = arr[i];
            };

            isEvenNumber = 1;
        } else {
            if (arr[i] > *maxOdd) {
                *maxOdd = arr[i];
            };

            isOddNumber = 1;
        };
    };

    if (isEvenNumber && isOddNumber) {
        *even = 1;
        *odd = 1;
    };
};

// ============================================================================= laboratory 7.6

int isPalindromeIterative(int arr[], int length) {
    int i, firstItem, lastItem;

    for (i = 0; i < length / 2; i++) {
        firstItem = arr[i];
        lastItem = arr[length - 1 - i];
    
        if (firstItem != lastItem) return 0;
    };

    return 1;
};

int isPalindromeRecursion(int arr[], int length) {
    int firstItem, lastItem;

    if (length < 2) return 1;

    firstItem = arr[0];
    lastItem = arr[length - 1];

    if (firstItem != lastItem) return 0;
    return isPalindromeRecursion(arr + 1, length - 2);
};

// ============================================================================= laboratory 7.7

void RegularPrint(int arr[], int length) {
    if (length > 0) {
        printf("%d", arr[0]);
        RegularPrint(arr + 1, length - 1);
    };
};

void ReversePrint(int arr[], int length) {
    if (length > 0) {
        printf("%d", arr[length - 1]);
        ReversePrint(arr, length - 1);
    };
};

// ============================================================================= laboratory 7.8

double calculateAverageRecursion(int arr[], int length) {
    double prevAverage;

    if (length == 1) return arr[0];
    
    prevAverage = calculateAverageRecursion(arr, length - 1);
    prevAverage *= (length - 1);
    return (prevAverage + arr[length - 1]) / length;
};

// ============================================================================= laboratory 7.9

int checkNumbersOrders(double arr[], int length) {
    if (length == 1) return 1;

    int integerPartFirstItem = arr[0];
    int integerPartSecondItem = arr[1];
    double decimalPointPartFirstItem = arr[0] - integerPartFirstItem;
    double decimalPointPartSecondItem = arr[1] - integerPartSecondItem;

    if (
        integerPartSecondItem < integerPartFirstItem ||
        decimalPointPartSecondItem > decimalPointPartFirstItem
    ) {
        return 0;
    };

    return checkNumbersOrders(arr + 1, length - 1);
};

// ============================================================================= laboratory 7.10

int isSuperArrayIterative(int arr[], int length) {
    int i, sumOfItems = arr[0], currentItem;

    for (i = 1; i < length; i++) {
        currentItem = arr[i];
        if (currentItem < sumOfItems) return 0;
        sumOfItems += currentItem;
    };

    return 1;
};

int isSuperArrayRecursion(int arr[], int length) {
    int sumOfItems;

    if (length == 1) return 1;

    sumOfItems = isSuperArrayRecursion(arr, length - 1);

    if (sumOfItems && arr[length - 1] > arr[length - 2]) {
        arr[length - 1] += arr[length - 2];
        return 1;
    };

    return 0;
};

// ============================================================================= laboratory 7.11