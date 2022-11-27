#include<stdio.h>
#include<math.h>

int main () {

    // int sumDigits(int numbers) {
    //     int sum = 0;

    //     while (numbers > 0) {
    //         sum += numbers % 10;
    //         numbers /= 10;
    //     };

    //     return sum;
    // };

    // int checkID (int id) {
    //     int sum = 0, sumOfDigit, digitIndex = 1, numberToMultiple = 1;
    
    //     while (id > 0) {
    //         numberToMultiple = digitIndex % 2 == 0 ? 2 : 1;
    //         sumOfDigit = (id % 10) * numberToMultiple;

    //         if (sumOfDigit > 9) {
    //             sumOfDigit = (sumOfDigit % 10) + (sumOfDigit / 10);
    //         };

    //         digitIndex++;
    //         sum += sumOfDigit;
    //         id /= 10;
    //     };

    //     return sum % 10 == 0;
    // };
    
    // int sumLongestArithmeticList(int number) {
    //     int i;
    //     int digit;
    //     int prevDigit;
    //     int differenceBetweenNumbers;
    //     int prevDifferenceBetweenNumbers;
    
    //     int longestSequence = 2;
    //     int prevLongestSequence = 2;
    //     int sum = 0;
    //     int maxSum = 0;
    
    //     printf("Enter a number:\n");
    //     scanf_s("%d", &prevDigit);

    //     if (number == 1) return prevDigit;

    //     printf("Enter a number:\n");
    //     scanf_s("%d", &digit);

    //     if (number == 2) return digit + prevDigit;
    
    //     prevDifferenceBetweenNumbers = digit - prevDigit;
    //     sum = prevDigit + digit;
    //     prevDigit = digit;

    //     for (i = 2; i < number; i++) {
    //         printf("Enter a number:\n");
    //         scanf_s("%d", &digit);

    //         differenceBetweenNumbers = digit - prevDigit;

    //         if (differenceBetweenNumbers == prevDifferenceBetweenNumbers) {
    //             sum += digit;
    //             longestSequence++;
        
    //             if (longestSequence > prevLongestSequence) {
    //                 maxSum = sum;
    //                 prevLongestSequence = longestSequence;
    //             } else if (longestSequence == prevLongestSequence && sum > maxSum) {
    //                 maxSum = sum;
    //             };
    //         } else {
    //             sum = prevDigit + digit;
    //             longestSequence = 2;
    //         };

    //         prevDifferenceBetweenNumbers = differenceBetweenNumbers;
    //         prevDigit = digit;
    //     };

    //     return maxSum;
    // };
    
    // int numberLength(int number) {
    //     return (int)log10(number) + 1;
    // };

    // int rotateNumber(int spins, int number) {
    //     int i;
    //     int firstDigit;
    //     int logNumber = numberLength(number) - 1;
    //     int powNumber = pow(10, logNumber);

    //     for (i = 0; i < (spins % numberLength(number)); i++) {
    //         firstDigit = number % 10;
    //         number /= 10;
    //         number += firstDigit * powNumber;
    //     };

    //     return number;
    // };

    return 0;
};
