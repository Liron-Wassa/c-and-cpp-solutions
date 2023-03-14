#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main () {

    // not clear

    // ============================================================================= class 4.1

    // typedef struct {
    //     char name[30];
    //     int id_card;
    //     int grade;
    // } Student;

    // int calculateAverage(Student arr[], int size, int *average) {
    //     int i, under_average = 0;

    //     *average = 0;

    //     for (i = 0; i < size; i++) {
    //         *average += arr[i].grade;
    //     };

    //     *average /= size;
    
    //     for (i = 0; i < size; i++) {
    //         if (arr[i].grade >= *average) {
    //             printf("name: %s, id: %d\n", arr[i].name, arr[i].id_card);
    //         } else {
    //             under_average++;
    //         }
    //     };

    //     return under_average;
    // };

    // Student arr[] = {
    //     { name: "a", id_card: 1, grade: 50 },
    //     { name: "b", id_card: 2, grade: 70 }
    // };

    // int size = sizeof(arr) / sizeof(Student), average = 0;
    // int result;

    // result = calculateAverage(arr, size, &average);

    // printf("under average: %d, average is: %d\n", result, average);

    // ============================================================================= class 4.2

    // typedef struct {
    //     char address[30];
    //     int rooms;
    //     double price;
    // } Apartment;

    // Apartment *getApartments(Apartment apartment_unit[], int size, int rooms_number, int max_price, int *apartments_size) {
    //     int i, j = 0;
    //     Apartment *available_apartments = NULL; 

    //     *apartments_size = 0;

    //     for (i = 0; i < size; i++) {
    //         if (apartment_unit[i].rooms == rooms_number && apartment_unit[i].price <= max_price) {
    //             (*apartments_size)++;
    //         };
    //     };

    //     available_apartments = (Apartment *)calloc(*apartments_size, sizeof(Apartment));

    //     for (i = 0; i < size; i++) {
    //         if (apartment_unit[i].rooms == rooms_number && apartment_unit[i].price <= max_price) {
    //             available_apartments[j++] = apartment_unit[i];
    //         };
    //     };

    //     return available_apartments;
    // };

    // Apartment arr[] = {
    //     { address: "a", rooms: 1, price: 50 },
    //     { address: "b", rooms: 2, price: 70 }
    // };

    // int size = sizeof(arr) / sizeof(Apartment), apartments_size = 0;
    // Apartment *result = NULL;
    // int i;

    // result = getApartments(arr, size, 1, 50, &apartments_size);

    // printf("apartments size: %d\n", apartments_size);

    // for (i = 0; i < 1; i++) {
    //     printf("address: %s, rooms: %d, price: %lf\n", result[i].address, result[i].rooms, result[i].price);
    // };
    
    // free(result);

    // ============================================================================= class 4.3

    return 0;
};