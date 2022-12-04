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
    //     int i, currentNum = number, prevPrevNum = 0, prevNum = 1;

    //     for (i = 2; i <= number; i++) {
    //         currentNum = prevPrevNum + prevNum;
    //         prevPrevNum = prevNum;
    //         prevNum = currentNum;
    //     };

    //     return currentNum;
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

    // float number;
    // int powerNumber;

    // printf("Enter a number:\n");
    // scanf("%f", &number);

    // printf("Enter a power:\n");
    // scanf("%d", &powerNumber);

    // float power(float x, int n) {
    //     if (n == 0) return 1;
    //     if (n == 1) return x;

    //     return x * power(x, n - 1);
    // };

    // printf("Result is: %f\n", power(number, powerNumber));

    // ============================================================================= laboratory 6.1

    // int number;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // int lucasSeriesRecursion(int number) {
    //     if (number == 0) return 2;
    //     if (number == 1) return 1;

    //     return lucasSeriesRecursion(number - 1) + lucasSeriesRecursion(number - 2);
    // };

    // int lucasSeriesIterative(int number) {
    //     int i, currentNum = number, prevPrevNum = 2, prevNum = 1;

    //     if (number == 0) return 2;

    //     for (i = 2; i <= number; i++) {
    //         currentNum = prevNum + prevPrevNum;
    //         prevPrevNum = prevNum;
    //         prevNum = currentNum;
    //     };

    //     return currentNum;
    // };

    // printf("Result is: %d\n", lucasSeriesIterative(number));

    // ============================================================================= laboratory 6.2

    // int number;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // int palSequenceRecursion(int number) {
    //     if (number == 0) return 0;
    //     if (number == 1) return 1;

    //     return 2 * palSequenceRecursion(number - 1) + palSequenceRecursion(number - 2);
    // };

    // int palSequenceIterative(int number) {
    //     int i, currentNum = number, prevPrevNum = 0, prevNum = 1;

    //     for (i = 2; i <= number; i++) {
    //         currentNum = prevPrevNum + 2 * prevNum;
    //         prevPrevNum = prevNum;
    //         prevNum = currentNum;
    //     };

    //     return currentNum;
    // };

    // printf("Result is: %d\n", palSequenceIterative(number));

    // ============================================================================= laboratory 6.3

    // int number;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // int someSequenceRecursion(int number) {
    //     if (number >= 0 && number <= 2) return 1;

    //     if (number % 2 != 0) {
    //         return someSequenceRecursion(number - 1) - someSequenceRecursion(number - 3);
    //     } else {
    //         return someSequenceRecursion(number - 1) + someSequenceRecursion(number - 2) + someSequenceRecursion(number - 3);
    //     };
    // };

    // int someSequenceIterative(int number) {
    //     int i, currentNum = number, prevPrevPrevNum = 1, prevPrevNum = 1, prevNum = 1;

    //     if (number >= 0 && number <= 2) return 1;

    //     for (i = 3; i <= number; i++) {
    //         if (i % 2 != 0) {
    //             currentNum = prevNum - prevPrevPrevNum;
    //             prevPrevPrevNum = prevPrevNum;
    //             prevPrevNum = prevNum;
    //             prevNum = currentNum;
    //         } else {
    //             currentNum = prevPrevPrevNum + prevPrevNum + prevNum;
    //             prevPrevPrevNum = prevPrevNum;
    //             prevPrevNum = prevNum;
    //             prevNum = currentNum;
    //         };
    //     };

    //     return currentNum;
    // };

    // printf("Result is Recursion: %d\n", someSequenceRecursion(number));

    // ============================================================================= laboratory 6.4

    // int number;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // int getLargestNumber(int number) {
    //     int digit;

    //     printf("Enter a digit:\n");
    //     scanf("%d", &digit);

    //     if (number == 1) return digit;
    //     if (digit > getLargestNumber(number - 1)) return digit;
    // };

    // printf("Largest number in the lis is: %d\n", getLargestNumber(number));

    // ============================================================================= laboratory 6.5

    // int number;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // int getSmallestNumber(int number) {
    //     int digit;
    
    //     printf("Enter a digit:\n");
    //     scanf("%d", &digit);

    //     if (number == 1) return digit;
    //     if (digit < getSmallestNumber(number - 1)) return digit;
    // };

    // printf("Smallest number in the lis is: %d\n", getSmallestNumber(number));

    // ============================================================================= laboratory 6.6

    // void PrintBinaryNumber(int number) {
    //     if (number != 1 && number != 0) PrintBinaryNumber(number / 2);
    //     printf("%d", number % 2);
    // };

    // PrintBinaryNumber(13);

    // ============================================================================= laboratory 6.7

    // void PrintLetters(int num, char ch1, char ch2) {
    //     if (num > 0) {
    //         printf("%c", ch1);
    //         PrintLetters(num - 1, ch1, ch2);
    //         printf("%c", ch2);
    //         printf("%c", ch2);
    //     };
    // };

    // PrintLetters(2, 'a', 'b');

    // ============================================================================= laboratory 6.8

    // int decrementDigits(int number) {
    //     if (number == 0) return 0;
    //     return (((number % 10) + 9) % 10) + decrementDigits(number / 10) * 10;
    // };
    
    // int incrementDigits(int number) {
    //     if (number == 0) return 0;
    //     return (((number % 10) + 1) % 10) + incrementDigits(number / 10) * 10;
    // };

    // printf("%d\n", decrementDigits(879021));

    // ============================================================================= laboratory 6.9

    int isSumOfNumberIsEven(int number) {
        if (number < 10) return number;
        return ((number % 10) + isSumOfNumberIsEven(number / 10)) % 2;
    };
    
    int isSumOfNumberIsEven(int number) {
        int result;
        if (number < 10) return number % 2 == 0 ? 1 : 0;
        result = isSumOfNumberIsEven(number / 10);

        if (number % 10 % 2 == 0) return result == 1 ? 1 : 0;
        return result == 1 ? 0 : 1;
    };

    printf("%d\n", isSumOfNumberIsEven(12345));

    // ============================================================================= laboratory 6.10

    // int checkPositionNumbersWeight(int number) {
    //     if (number <= 0) return 1;

    //     if (((number % 10) % 2 == 0) && ((number / 10) % 10) % 2 != 0) {
    //         return checkPositionNumbersWeight(number / 100);
    //     };

    //     return 0;
    // };

    // printf("%d\n", checkPositionNumbersWeight(343418));

    // ============================================================================= laboratory 6.11

    // int checkReplacedNumbers(int number) {
    //     if (number < 9) return 1;

    //     if (((number % 10) % 2 == 0) && ((number / 10) % 10) % 2 != 0) {
    //         return checkReplacedNumbers(number / 10);
    //     } else if (((number % 10) % 2 != 0) && ((number / 10) % 10) % 2 == 0) {
    //         return checkReplacedNumbers(number / 10);
    //     };

    //     return 0;
    // };

    // printf("%d\n", checkReplacedNumbers(234));

    // ============================================================================= laboratory 6.12

    return 0;
};
