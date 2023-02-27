#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main() {
    // int checkIfItemEqualToIndex1(int arr[], int size) {
    //     int i;
        
    //     for (i = 0; i < size; i++) {
    //         if (arr[i] == i) return 1;
    //     };

    //     return -1;
    // };

    // int checkIfItemEqualToIndex2(int arr[], int size) {
    //     int start = 0, middle, end = size - 1;

    //     while (start <= end) {
    //         middle = (start + end) / 2;

    //         if (arr[middle] == middle) return 1;
            
    //         if (arr[middle] > middle) {
    //             end = middle - 1;
    //         } else {
    //             start = middle + 1;
    //         };
    //     };

    //     return -1;
    // };

    // ============================================================================= class 10.1

    // int getIndexOfFoundItem1(int arr[], int size, int key) {
    //     int start = 0, middle, end = size - 1;

    //     while (start <= end) {
    //         middle = (start + end) / 2;
    
    //         if (arr[middle] == key) return middle;

    //         if (arr[middle] > key) {
    //             start = middle - 1;
    //         } else {
    //             end = middle + 1;
    //         };
    //     };

    //     return -1;
    // };

    // int getIndexOfFoundItem2(int arr[], int start, int end, int key) {
    //     int middle;

    //     if (start >= end) return -1;

    //     middle = (start + end) / 2;

    //     if (arr[middle] == key) return middle;

    //     if (arr[middle] > key) {
    //         return getIndexOfFoundItem2(arr, middle + 1, end, key);
    //     } else {
    //         return getIndexOfFoundItem2(arr, start, middle - 1, key);
    //     };
    // };

    // ============================================================================= class 10.2

    // int getFirstShowItemInList(int arr[], int size, int key) {
    //     int start = 0, middle, end = size - 1;

    //     while (start <= end) {
    //         middle = (start + end) / 2;

    //         if (arr[middle - 1] != key && arr[middle] == key) return middle;
            
    //        if (arr[middle] < key) {
    //             start = middle + 1;
    //         } else {
    //             end = middle - 1;
    //         };
    //     };

    //     return -1;
    // };

    // ============================================================================= class 10.3

    // int findTwoItemThatMatchTheSumOfX(int arr[], int size, int x, int *p1, int *p2) {
    //     int start = 0, end = size - 1;

    //     while (start < end) {
    //         if (arr[start] + arr[end] == x) {
    //             *p1 = start;
    //             *p2 = end;

    //             return 1;
    //         };

    //         if (arr[start] + arr[end] > x) {
    //             end--;
    //         } else {
    //             start++;
    //         };
    //     };

    //     return -1;
    // };

    // ============================================================================= class 10.4

    // int binarySearchAlternatelySorted(int arr[], int n, int x) {
    //     int start = 0, end = n - 1, middle;

    //     while (start < end) {
    //         middle = (end - start) / 2 + start;

    //         if (arr[middle] + arr[middle + 1] == x) return middle;

    //         if (arr[middle] + arr[middle + 1] < x) {
    //             start = middle + 1;
    //         } else {
    //             end = middle;
    //         }
    //     };

    //     return -1;
    // };

    // ============================================================================= class 10.5

    // int findMissingNumber1(int arr[], int n) {
    //     int missingNumber = n * (n + 1) / 2, i;

    //     for (i = 0; i < n; i++) {
    //         missingNumber -= arr[i];
    //     };

    //     return missingNumber;
    // };

    // ============================================================================= laboratory 10.1

    // int findMissingNumber2(int arr[], int n) {
    //     int start = 0, end = n - 1, middle;

    //     if (arr[start] != 1) return 1;
    //     if (arr[end] != end + 1) return end + 1;

    //     while (end - start > 1) {
    //         middle = (start + end) / 2;

    //         if (arr[start] - start != arr[middle] - middle) {
    //             end = middle;
    //         } else if (arr[end] - end != arr[middle] - middle) {
    //             start = middle;
    //         };

    //     };

    //     return arr[start] + 1;
    // };

    // ============================================================================= laboratory 10.2
    
    // int binarySearchEven(int arr[], int k, int key) {
    //     int start = 0, end = k - 1, middle;

    //     while (start < end) {
    //         middle = (end - start) / 2 + start;

    //         if (arr[2 * middle] + arr[2 * middle + 1] == key) return middle;

    //         if (arr[2 * middle] + arr[2 * middle + 1] < key) {
    //             start = middle + 1;
    //         } else {
    //             end = middle;
    //         }
    //     };

    //     return -1;
    // };


    // ============================================================================= laboratory 10.3

    // int binarySearchAbsoluteValue(int arr[], int n, int k) {
    //     int start = 0, end = n - 1, middle, currentSub, prevSub, nextSub;

    //     while (start <= end) {
    //         middle = (end - start) / 2 + start;

    //         if (middle == 0) return arr[middle];

    //         currentSub = k - arr[middle];
    //         prevSub = k - arr[middle - 1];
    //         nextSub = k - arr[middle + 1];

    //         if (currentSub < 0) currentSub = currentSub * -1;
    //         if (prevSub < 0) prevSub = prevSub * -1;
    //         if (nextSub < 0) nextSub = nextSub * -1;

    //         if (currentSub < nextSub && currentSub < prevSub) return arr[middle];
    //         if (currentSub > nextSub) start = middle + 1;
    //         else end = middle - 1;
    //     };
    
    //     return -1;
    // };

    // int arr[] = {1, 5, 6, 8, 11, 15}, size = sizeof(arr) / sizeof(int);
    // printf("%d\n", binarySearchAbsoluteValue(arr, size, 30));

    // ============================================================================= laboratory 10.4

    // int binarySearchCircleSorted(int arr[], int n) {
    //     int start = 0, end = n - 1, middle;

    //     while (start <= end) {
    //         middle = (end - start) / 2 + start;

    //         if (middle == 0) return middle;
    //         if (arr[middle] < arr[middle + 1] && arr[middle] < arr[middle - 1]) return middle;

    //         if (arr[middle] > arr[middle + 1]) start = middle + 1;
    //         else end = middle - 1;
    //     };

    //     return -1;
    // };

    // int arr[] = {11,14,17,1,5,8}, size = sizeof(arr) / sizeof(int);
    // printf("%d\n", binarySearchCircleSorted(arr, size));

    // ============================================================================= laboratory 10.5

    // int searchSumToZero(int pos[], int neg[], int n, int *p1, int *p2) {
    //     *p1 = 0, *p2 = n - 1;

    //     while (*p2 >= 0 && *p1 < *p2) {
    //         if (pos[*p2] + neg[*p1] == 0) return 1;

    //         if (pos[*p2] + neg[*p1] > 0) *p2 -= 1;
    //         else *p1 += 1;
    //     };

    //     *p1 = *p2 = -1;
    //     return 0;
    // };

    // int p1, p2;
    // int arr1[] = {1,4,8,11}, arr2[] = {-20,-15,-11,-3}, size = sizeof(arr1) / sizeof(int);
    // int value = searchSumToZero(arr1, arr2, size, &p1, &p2);

    // printf("value: %d, p1: %d, p2: %d\n", value, p1, p2);

    // ============================================================================= laboratory 10.6

    // int getNumbersOfUnity1(int arr[], int n) {
    //     int start = 0, end = n - 1, middle;

    //     if (arr[0] == 0) return 0;
    //     if (arr[n - 1] == 1) return n;

    //     while (start <= end) {
    //         middle = (end - start) / 2 + start;

    //         if (arr[middle] == 1 && arr[middle + 1] != 1) return middle + 1;
    //         if (arr[middle] == 1 && arr[middle + 1] == 1) start = middle + 1;
    //         else end = middle - 1;

    //     };

    //     return end;
    // };

    // int getNumbersOfUnity2(int arr[], int n) {
    //     int t = 1;

    //     if (arr[0] == 0) return 0;
    //     if (arr[n - 1] == 1) return n;

    //     while (arr[t]) {
    //         t *= 2;
    //         if (t >= n) t = n - 1;
    //     };

    //     return t / 2 + getNumbersOfUnity2(arr + t / 2, t - t / 2 + 1);
    // };

    // int arr[] = {1,1,0,0,0}, size = sizeof(arr) / sizeof(int);
    // printf("%d\n", getNumbersOfUnity1(arr, size));

    // ============================================================================= laboratory 10.7

    // int binarySearchSunIndex(int arr[], int n, int d) {
    //     int start = 0, end = n - 2, middle;

    //     while (start <= end) {
    //         middle = (end - start) / 2 + start;

    //         if (arr[middle + 1] - arr[middle] == d) return middle;
    //         if (arr[middle + 1] - arr[middle] < d) start = middle + 1;
    //         else end = middle - 1;

    //     };

    //     return -1;
    // };

    // int arr[] = {2, 4, 7, 12, 20, 31, 46}, size = sizeof(arr) / sizeof(int);
    // printf("%d\n", binarySearchSunIndex(arr, size, 8));

    // ============================================================================= laboratory 10.8

    // int binarySearchMissingItem(int arr1[], int arr2[], int n) {
    //     int start = 0, end = n - 1, middle;

    //     while (start <= end) {
    //         middle = (end - start) / 2 + start;

    //         if (arr1[middle] == arr2[middle]) start = middle + 1;
    //         else end = middle - 1;
    //     };

    //     return arr1[middle] == arr2[middle] ? arr1[middle + 1] : arr1[middle];
    // };

    // int arr1[] = {-3, 1, 10, 21, 22, 23, 31, 40};
    // int arr2[] = {-3, 10, 21, 22, 23, 31, 40};
    // int size = sizeof(arr2) / sizeof(int);

    // printf("%d\n", binarySearchMissingItem(arr1, arr2, size));

    // ============================================================================= laboratory 10.9

    // int binarySearchCountDuplicate(int arr[], int n, int x) {
    //     int start = 0, end = n - 1, middle, counter = 0;

    //     while (start <= end) {
    //         middle = (end - start) / 2 + start;

    //         if (arr[middle] > x) end = middle - 1;
    //         else start = middle + 1;

    //         if (arr[middle] == x) counter++;
    //     };

    //     return counter;
    // };

    // int arr[] = {1, 4, 6, 6, 6, 7, 7, 8, 11, 14, 22} ;
    // int size = sizeof(arr) / sizeof(int);

    // printf("%d\n", binarySearchCountDuplicate(arr, size, 6));

    // ============================================================================= laboratory 10.10

    return 0;
};