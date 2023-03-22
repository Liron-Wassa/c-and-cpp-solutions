#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define SIZE 5

int main () {

    int isAbundantNumber(int number) {
        int sum = 0, divider = 1;

        while (divider < number / 2 + 1) {
            if (number % divider == 0) {
                sum += divider;
            };

            divider++;
        };

        return sum > number;
    };

    int isAbundantNumberExist(int a, int b, int **abundant_numbers) {
        int size = 0, j = 0, i;
        int arr_size = 1, flag = 0;

        *abundant_numbers = NULL;

        *abundant_numbers = (int *)calloc(arr_size, sizeof(int));
        assert(*abundant_numbers);

        for (i = a; i <= b; i++) {
            if (isAbundantNumber(i)) {
                (*abundant_numbers)[j++] = i;
                size++;
                flag = 1;

                if (j == arr_size) {
                    arr_size *= 2;
                    *abundant_numbers = (int *)realloc(*abundant_numbers, sizeof(int) * arr_size);
                    assert(*abundant_numbers);
                };
            };
        };

        if (!flag) {
            free(*abundant_numbers);
            *abundant_numbers = NULL;
        } else {
            *abundant_numbers = (int *)realloc(*abundant_numbers, sizeof(int) * j);
            assert(*abundant_numbers);
        };

        return size;
    };

    // ========================================================== Q.1

    void *realloc1(void *mem_block, unsigned size_old, unsigned size_new) {
        char *src = (char *)mem_block;
        char *dest = malloc(size_new);;
        int i, min;

        int min_size = size_old < size_new ? size_old : size_new;

        if (!dest) return NULL;

        for (i = 0; i < min_size; i++) {
            dest[i] = src[i];
        };

        free(mem_block);

        return (void *)dest;
    };

    // ========================================================== Q.2

    int *arrcat(int *arr1, unsigned size1, int *arr2, unsigned size2) {
        int i, *new_list = NULL;

        new_list = (int *)realloc1(arr1, size1 * sizeof(int), (size1 + size2) * sizeof(int));

        if (!new_list) return NULL;

        for (i = 0; i < size2; i++) {
            new_list[size1 + i] = arr2[i];
        };

        return new_list;
    };

    // ========================================================== Q.3

    int *insert(int *arr, unsigned size, int num, unsigned i) {
        int j, *new_list = NULL;

        if (arr == NULL || size == 0) {
            new_list = (int *)calloc(1, sizeof(int));
            new_list[0] = num;
        } else {
            new_list = (int *)calloc(size + 1, sizeof(int));
        };

        if (new_list == NULL || i >= size) return NULL;

        if (arr != NULL && size != 0) {
            for (j = 0; j < i; j++) {
                new_list[j] = arr[j];
            };

            new_list[j] = num;

            for (j = i; j < size; j++) {
                new_list[j + 1] = arr[j];
            };
        };

        free(arr);
    
        return new_list;
    };

    // ========================================================== Q.4

        int *delete(int *arr, unsigned size, unsigned i) {
        int j, *new_list = NULL;

        new_list = (int *)calloc(size - 1, sizeof(int));
        assert(new_list);

        if (size == 0 || size == 1 || arr == NULL) return NULL;

        for (j = 0; j < i; j++) {
            new_list[j] = arr[j];
        };

        for (j = i + 1; j < size; j++) {
            new_list[j - 1] = arr[j];
        };

        free(arr);

        return new_list;
    };

    // ========================================================== Q.5

    int isUniqueNumber(int number, int *arr, int size) {
        int i = 0;

        for (i = 0; i < size; i++) {
            if (number == arr[i]) return 0;
        };

        return 1;
    };
    
    int *getlist(int *A, int n, int *B, int m, int *size) {
        int i, j, k = 0,flag = 0;

        int *C = (int *)calloc(n, sizeof(int));
        assert(C);

        *size = 0;

        for (i = 0; i < n; i++) {
            if (isUniqueNumber(A[i], B, m)) {
                C[k++] = A[i];
                *size += 1;
            };
        };

        return C;
    };

    // ========================================================== Q.6


    return 0;
};