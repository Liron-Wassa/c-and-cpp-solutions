#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3

typedef struct {
   char id[10];
   char name[31];
   double shopping_price;
} Customer;

int initTxtFile(char *path);
int initBinFile(char *path);
int updateTxtFile(char *path, char *id, double new_price);
int updateBinFile(char *path, char *id, double new_price);
int printCustomer(char *path);

int main () {    
    initTxtFile("./test.txt");
    updateTxtFile("./test.txt", "20051546", 20);
    initBinFile("./test1.txt");
    updateBinFile("./test1.txt", "20051546", 20);
    printCustomer("./test1.txt");

    return 0;
}

int initTxtFile(char *path) {
    int i;
    FILE *file = fopen(path, "w");
    Customer customers[N] = {
        {"06842151", "Moshe", 71.25},
        {"330578795", "Bejamin", 71.25},
        {"20051546", "Dina", 560.10},
    };

    if (!file) return 0;

    for (i = 0; i < N; i++) {
        fprintf(file, "%9s%30s%8.2lf\n", customers[i].id, customers[i].name, customers[i].shopping_price);
    }

    fclose(file);

    return 1;
}

int initBinFile(char *path) {
    int i;
    FILE *file = fopen(path, "wb");
    Customer customers[N] = {
        {"06842151", "Moshe", 71.25},
        {"330578795", "Bejamin", 71.25},
        {"20051546", "Dina", 560.10},
    };

    if (!file) return 0;

    for (i = 0; i < N; i++) {
        fwrite(customers + i, sizeof(Customer), 1, file);
    }

    fclose(file);

    return 1;
}

int updateTxtFile(char *path, char *id, double new_price) {
    FILE *file = fopen(path, "r+");
    Customer customer;

    if (!file) return 0;

    fscanf(file, "%9s%30s%lf", customer.id, customer.name, &customer.shopping_price);

    while (!feof(file)) {
        if (strcmp(id, customer.id) == 0) {
            fseek(file, -8, SEEK_CUR);
            fprintf(file, "%8.2lf", customer.shopping_price + new_price);
            fclose(file);
            return 1;
        }

        fscanf(file, "%9s%30s%lf", customer.id, customer.name, &customer.shopping_price);
    }

    fclose(file);
    return 0;
}

int updateBinFile(char *path, char *id, double new_price) {
    FILE *file = fopen(path, "rb+");
    Customer customer;

    if (!file) return 0;

    fread(&customer, sizeof(Customer), 1, file);

    while (!feof(file)) {
        if (strcmp(id, customer.id) == 0) {
            customer.shopping_price += new_price;
            fseek(file, sizeof(Customer) * -1, SEEK_CUR);
            fwrite(&customer, sizeof(Customer), 1, file);
            fclose(file);
            return 1;
        }

        fread(&customer, sizeof(Customer), 1, file);
    }

    fclose(file);
    return 0;
}

int printCustomer(char *path) {
    Customer customer;
    FILE *file = fopen(path, "rb+");

    if (!file) return 0;

    fread(&customer, sizeof(Customer), 1, file);

    while (!feof(file)) {
        printf("%9s%30s%8.2lf\n", customer.id, customer.name, customer.shopping_price);
        fread(&customer, sizeof(Customer), 1, file);
    }

    fclose(file);

    return 1;
}