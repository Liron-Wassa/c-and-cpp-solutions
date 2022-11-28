#include<stdio.h>

int main() {
    // int number;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // int iNumberContainsEventDigit(int number) {
    //     if (number <= 0) return 0;
    //     if ((number % 10) % 2 == 0) return 1;

    //     return iNumberContainsEventDigit(number / 10);
    // };

    // printf("%d\n", iNumberContainsEventDigit(number));

    // ============================================================================= class 6.1

    // int number;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // int getFibNumber(int number) {
    //     int i, nextNextNum = number, prevNum = 0, nextNum = 1;

    //     for (i = 2; i <= number; i++) {
    //         nextNextNum = prevNum + nextNum;
    //         prevNum = nextNum;
    //         nextNum = nextNextNum;
    //     };

    //     return nextNextNum;
    // };

    // int getFibNumber(int number) {
    //     if (number == 0) return 0;
    //     if (number == 1 || number == 2) return 1;
    //     return getFibNumber(number - 1) + getFibNumber(number - 2);
    // };

    // printf("Fib num is: %d\n", getFibNumber(number));

    // ============================================================================= class 6.2

    // int number;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // int getDigitLength(int number) {
    //     if (number <= 0) return 0;
    //     return getDigitLength(number / 10) + 1;
    // };

    // int getDigitSum(int number) {
    //     if (number <= 0) return 0;
    //     return (number % 10) + getDigitSum(number / 10);
    // };

    // int isSortedNumber(int number) {
    //     if (number < 9) return  1;        
    //     if ((number % 10) >= ((number / 10) % 10)) return 0;

    //     return isSortedNumber(number / 10);
    // };

    // printf("%d\n", isSortedNumber(number));

    // ============================================================================= class 6.3
    
    // int countLowerNumberInSeries(int number) {
    //     int digit;

    //     printf("Enter a digit:\n");
    //     scanf("%d", &digit);

    //     if (digit == -1) return 0;
    //     else if (digit < number) return countLowerNumberInSeries(number) + 1;
    //     else return countLowerNumberInSeries(number);
    // };

    // printf("Result is: %d\n", countLowerNumberInSeries(5));

    // ============================================================================= class 6.4

    // void PrintDescendingNumbers(int number) {
    //     printf("%d", number);
    //     if (number != 1) PrintDescendingNumbers(number - 1);
    // };

    // void PrintAscendingNumbers(int number) {
    //     if (number != 1) PrintAscendingNumbers(number - 1);
    //     printf("%d", number);
    // };

    // void PrintDescendingAndAscendingNumbers(int number) {
    //     printf("%d", number);

    //     if (number != 1) {
    //         PrintDescendingAndAscendingNumbers(number - 1);
    //         printf("%d", number);
    //     };
    // };

    // PrintDescendingAndAscendingNumbers(10);

    // ============================================================================= class 6.5

    return 0;
};
