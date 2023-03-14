#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void *realloc1(void *mem_block, unsigned size_old, unsigned size_new);
int *arrcat(int *arr1, unsigned size1, int *arr2, unsigned size2);

void Ex1();
void Ex2();

int main () {
    int task;
    
    printf("which task you want to run?\nfor Ex1 press 1, for Ex2 press 2, otherwise press on any letter to exit the program\n");

    while (scanf("%d", &task)) {
        switch (task) {
            case 1: {
                Ex1 ();
                printf("for Ex1 press 1, for Ex2 press 2, otherwise press on any letter to exit the program\n");
                break;
            }
            case 2: {
                Ex2();
                printf("for Ex1 press 1, for Ex2 press 2, otherwise press on any letter to exit the program\n");
                break;
            }
            
            default:
                printf("[invalid choice]: for Ex1 press 1, for Ex2 press 2, otherwise press on any letter to exit the program\n");
                break;
        }
    };

    return 0;
};

void Ex1 () {
    int size, new_size, expected_size, i;
    int *arr1 = NULL;
    int *arr2 = NULL;

    printf("Enter the initial size of the array:\n");
    scanf("%d", &size);

    arr1 = (int *)calloc(size, sizeof(int));

    for (i = 0; i < size; i++) {
        printf("Enter item at index [%d]\n", i);
        scanf("%d", &arr1[i]);
    };

    printf("Enter the new size for the array:\n");
    scanf("%d", &new_size);

    arr2 = (int *)realloc1(arr1, size * sizeof(int), new_size * sizeof(int));

    if (arr2 != NULL) {
        printf("Success\n");
    } else {
        printf("Failed\n");
    };

    free(arr2);   
}

void Ex2 () {
    int size1, size2, i;
    int *arr1 = NULL;
    int *arr2 = NULL;
    int *result = NULL;

    printf("Enter size1 of the array:\n");
    scanf("%d", &size1);

    arr1 = (int *)calloc(size1, sizeof(int));

    for (i = 0; i < size1; i++) {
        printf("Enter arr1 item at index [%d]\n", i);
        scanf("%d", &arr1[i]);
    };

    printf("Enter size2 of the array:\n");
    scanf("%d", &size2);

    arr2 = (int *)calloc(size2, sizeof(int));

    for (i = 0; i < size2; i++) {
        printf("Enter arr2 item at index [%d]\n", i);
        scanf("%d", &arr2[i]);
    };

    result = arrcat(arr1, size1, arr2, size2);

    if (result != NULL) {
        printf("Success\n");
        free(arr2);
        free(result);
    } else {
        printf("Failed\n");
        free(arr1);
        free(arr2);
    };
}

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

int *arrcat(int *arr1, unsigned size1, int *arr2, unsigned size2) {
    int i, *new_list = NULL;

    new_list = (int *)realloc1(arr1, size1 * sizeof(int), (size1 + size2) * sizeof(int));

    if (!new_list) return NULL;

    for (i = 0; i < size2; i++) {
        new_list[size1 + i] = arr2[i];
    };

    return new_list;
};
