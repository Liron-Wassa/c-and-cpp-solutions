#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define SIZE 10

int main()
{
    // helpers functions

    int binarySearchKey(int arr[], int n, int key)
    {
        int start = 0, end = n - 1, middle;

        while (start <= end)
        {
            middle = (end - start) / 2 + start;

            if (arr[middle] == key)
                return middle;

            if (arr[middle] > key)
                end = middle - 1;
            else
                start = middle + 1;
        };

        return -1;
    };

    void swap(int *v, int *u)
    {
        int temp;
        temp = *v;
        *v = *u;
        *u = temp;
    }

    void merge(int *a, int p, int q, int r)
    {
        int i = p, j = q + 1, k = 0;
        int *temp = (int *)malloc((r - p + 1) * sizeof(int));

        while ((i <= q) && (j <= r))
            if (a[i] < a[j])
                temp[k++] = a[i++];
            else
                temp[k++] = a[j++];
        // if(i>q)
        while (j <= r)
            temp[k++] = a[j++];
        //  j>r
        while (i <= q)
            temp[k++] = a[i++];
        /* copy temp[] to a[]   */
        for (i = p, k = 0; i <= r; i++, k++)
            a[i] = temp[k];
        free(temp);
    }

    void merge_sort(int *a, int first, int last)
    {
        int middle;
        if (first < last)
        {
            middle = (first + last) / 2;
            merge_sort(a, first, middle);
            merge_sort(a, middle + 1, last);
            merge(a, first, middle, last);
        }
    }

    int split(int *a, int left, int right)
    {
        int i, last = left;
        if (left < right)
        {
            for (i = left + 1; i <= right; i++)
                if (a[i] <= a[left])
                    swap(a + (++last), a + i);
            swap(a + left, a + last);
        }
        return last;
    }

    void quick_sort(int *x, int first, int last)
    {
        int pos;
        if (first < last)
        {
            pos = split(x, first, last);
            quick_sort(x, first, pos - 1);
            quick_sort(x, pos + 1, last);
        }
    }

    // =====================================================================

    // void sortFromZeroToNine(int arr[], int n) {
    //     int i, j = 0;
    //     int tempList[SIZE] = { 0 };

    //     for (i = 0; i < n; i++) {
    //         tempList[arr[i]]++;
    //     };

    //     for (i = 0; i < SIZE; i++) {
    //         while(tempList[i]) {
    //             arr[j] = i;
    //             tempList[i]--;
    //             j++;
    //         };
    //     };
    // };

    // ============================================================================= class 11.1

    // void sortEvenToStartOddToEnd(int arr[], int n) {
    //     int start = 0, end = n - 1;
    //     int left, right;

    //     while(start <= end) {
    //         left = arr[start];
    //         right = arr[end];

    //         if (left % 2 == 0) {
    //             start++;
    //         } else if (right % 2 == 1) {
    //             end--;
    //         } else {
    //             swap(arr + start, arr + end);
    //             start++;
    //             end--;
    //         }
    //     };
    // };

    // ============================================================================= class 11.2

    // void sortMerge(int arr[], int n, int k) {
    //     int i;

    //     for (i = k - 1; i + k <  n; i += k) {
    //         merge(arr, 0, i, i + k);
    //     };

    //     if (i + k >= n) {
    //         merge(arr, 0, i, n - 1);
    //     };
    // };

    // ============================================================================= class 11.3

    // int sumKSmallest(int *arr, int n, int k)
    // {
    //     int pos = 0, sum = 0, right = n - 1, left = 0, i;

    //     if (k <= 0)
    //         return 0;
    //     if (k > 0 && k < n)
    //     {
    //         while (left < right)
    //         {
    //             pos = split(arr, left, right);
    //             if ((pos == k) || (pos == (k - 1)))
    //                 break;
    //             else if (pos > k)
    //                 right = pos - 1;
    //             else
    //                 left = pos + 1;
    //         }
    //     }
    //     for (i = 0; i < k; i++)
    //         sum += arr[i];
    //     return sum;
    // }

    // ============================================================================= class 11.4

    // void reverse(int arr[], int n)
    // {
    //     int i;

    //     for (i = 0; i < n / 2; i++)
    //     {
    //         swap(arr + i, arr + n - 1 - i);
    //     };
    // };

    // void sortReverse(int arr[], int n)
    // {
    //     merge_sort(arr, 0, n - 1);
    //     reverse(arr, n);
    // };

    // ============================================================================= class 11.5

    // void sortCoupleNumbers(int A[], int k) {
    //     int i;

    //     for (i = 0; i < k * 2; i++) {
    //         if (A[i] > A[i + 1]) swap(A + i, A + i + 1);
    //     };
    // };

    // ============================================================================= laboratory 11.1

    // void sortEven(int arr[], int n) {
    //     int i, zero = 0, one = 0, two = 0;

    //     for (i = 0; i < n; i++) {
    //         if (arr[i] == 0) zero++;
    //         if (arr[i] == 1) one++;
    //         if (arr[i] == 2) two++;
    //     };

    //     i = 0;

    //     while (zero) {
    //         arr[i++] = 0;
    //         zero--;
    //     };

    //     while (one) {
    //         arr[i++] = 1;
    //         one--;
    //     };

    //     while (two) {
    //         arr[i++] = 2;
    //         two--;
    //     };
    // };

    // ============================================================================= laboratory 11.2

    // void sort3(int arr[], int n) {
    //     int i, j = 0;
    //     int *tempList = (int *)calloc(n + 1, sizeof(int));
    //     assert(tempList);

    //     for (i = 0; i < n; i++) {
    //         tempList[arr[i]]++;
    //     };

    //     for (i = 0; i < n + 1; i++) {
    //         while (tempList[i]) {
    //             arr[j++] = i;
    //             tempList[i]--;
    //         };
    //     };

    //     free(tempList);
    //     tempList = NULL;
    // };

    // ============================================================================= laboratory 11.3

    // void sort4(int arr[], int n) {
    //     int start = 0, end = n - 1;

    //     while(start < end) {
    //         if (arr[start] > 0) start++;
    //         else if (arr[end] < 0) end--;
    //         else {
    //             swap(arr + start, arr + end);
    //             start++;
    //             end--;
    //         };
    //     };
    // };

    // ============================================================================= laboratory 11.4

    // void sort5(int arr[], int n) {
    //     int start = 0, end = n - 1;

    //     while(start < end) {
    //         if (arr[start] < 0) start++;
    //         else if (arr[end] > 0) end--;
    //         else {
    //             swap(arr + start, arr + end);
    //             start++;
    //             end--;
    //         };
    //     };

    //     start = 0;
    //     end = 1;

    //     while (end < n) {
    //         if (arr[start] < 0 && arr[end] < 0 || arr[start] > 0 && arr[end] > 0) {
    //             if (arr[start] % 2 != 0 && arr[end] % 2 == 0) {
    //                 swap(arr + start, arr + end);
    //                 start++;
    //                 end++;
    //             } else if (arr[start] % 2 == 0 && arr[end] % 2 == 0) {
    //                 start++;
    //                 end++;
    //             } else {
    //                 end++;
    //             };
    //         } else {
    //             start++;
    //             end++;
    //         };
    //     };
    // };

    // ============================================================================= laboratory 11.5

    // void sort6(int arr[], int n) {
    //     int start = 0, end = n - 1, lastIndexSwapped;

    //     while(start < end) {
    //         if (arr[start] % 3 == 0) start++;
    //         else if (arr[end] % 3 != 0) end--;
    //         else {
    //             lastIndexSwapped = end;
    //             swap(arr + start, arr + end);
    //             start++;
    //             end--;
    //         };
    //     };

    //     start = lastIndexSwapped + 1, end = n - 1;

    //     while(start < end) {
    //         if (arr[start] % 3 == 1) start++;
    //         else if (arr[end] % 3 != 1) end--;
    //         else {
    //             swap(arr + start, arr + end);
    //             start++;
    //             end--;
    //         };
    //     };
    // };

    // ============================================================================= laboratory 11.6

    // int checkIfArrayEqual(int arr1[], int arr2[], int n) {
    //     int i;

    //     merge_sort(arr2, 0, n - 1);

    //     for (i = 0; i < n; i++) {
    //         if (binarySearchKey(arr2, n, arr1[i]) == -1) return 0;
    //     };

    //     return 1;
    // };

    // ============================================================================= laboratory 11.7

    // int checkSum(int arr[], int n) {
    //     int i, sum = arr[0];

    //     merge_sort(arr, 0, n - 1);

    //     for (i = 1; i < n; i++) {
    //         if (arr[i] == sum) return arr[i];
    //         sum += arr[i];
    //     };

    //     return -1;
    // };

    // ============================================================================= laboratory 11.8

    // void checkMinSubABS(int arr[], int n, int *a, int *b) {
    //     int i, minSub = arr[1] - arr[0];
    //     *a = arr[0];
    //     *b = arr[1];

    //     merge_sort(arr, 0, n - 1);

    //     for (i = 2; i < n; i++) {
    //         if (arr[i] - arr[i - 1] < minSub) {
    //             minSub = arr[i] - arr[i - 1];
    //             *a = arr[i - 1];
    //             *b = arr[i];
    //         };
    //     };
    // };

    // ============================================================================= laboratory 11.9

    // int *buildMinValues(int arr[], int n, int k) {
    //     int i;
    //     int *minValues = (int *) calloc(k, sizeof(int));
    //     assert(minValues);

    //     merge_sort(arr, 0, n - 1);

    //     for (i = 0; i < k; i++) {
    //         minValues[i] = arr[i];
    //     };

    //     return minValues;
    // };

    // ============================================================================= laboratory 11.10

    return 0;
};
