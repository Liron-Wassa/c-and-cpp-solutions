#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_BITS 32

void displayBits(unsigned value);
int circuitShiftLeft(int number, unsigned int shift);
int circuitShiftRight(int number, unsigned int shift);

int main () {
    char ch;
    int task = -1, number, shift, result;

    int (*pf[2])(int, unsigned int) = { circuitShiftLeft, circuitShiftRight };

    do {
        printf("Press 1 to run task one and 2 for running task two, Press -1 or ctrl + c to exit\n");
        scanf("%d", &task);

        if (task == 1 || task == 2) {
            printf("Enter a number to shift\n");
            scanf("%d", &number);
        
            printf("Enter a numbers of shifting\n");
            scanf("%d", &shift);
        };

        switch (task) {
            case 1:
                printf("Before shifting left: ");
                displayBits(number);
                result = pf[task - 1](number, shift);
                printf("After shifting left:  ");
                displayBits(result);
                break;
            case 2:
                printf("Before shifting right: ");
                displayBits(number);
                result = pf[task - 1](number, shift);
                printf("After shifting right:  ");
                displayBits(result);
                break;
            
            default:
                break;
        }

    } while(task != -1);


    return 0;
}

int circuitShiftLeft(int number, unsigned int shift) {
    return (number << shift) | (number >> (MAX_BITS - shift));
}

int circuitShiftRight(int number, unsigned int shift) {
    return (number >> shift) | (number << (MAX_BITS - shift));
}

void displayBits(unsigned value) {
    unsigned displayMask = 1 << (MAX_BITS - 1);
    int i;

    for (i = 1; i <= MAX_BITS; i++) {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1;
        if (i % 8 == 0) putchar(' ');
    }

    putchar('\n');
}