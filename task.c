#include<stdio.h>
#include<math.h>

int main () {

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
    //     scanf("%d", &prevDigit);

    //     if (number == 1) return prevDigit;

    //     printf("Enter a number:\n");
    //     scanf("%d", &digit);

    //     if (number == 2) return digit + prevDigit;
    
    //     prevDifferenceBetweenNumbers = digit - prevDigit;
    //     sum = prevDigit + digit;
    //     prevDigit = digit;

    //     for (i = 2; i < number; i++) {
    //         printf("Enter a number:\n");
    //         scanf("%d", &digit);

    //         differenceBetweenNumbers = digit - prevDigit;

    //         if (differenceBetweenNumbers == prevDifferenceBetweenNumbers) {
    //             sum += digit;
    //             longestSequence++;
    //         } else if (longestSequence > prevLongestSequence) {
    //             maxSum = sum;
    //             sum = prevDigit + digit;
    //             prevLongestSequence = longestSequence;
    //             longestSequence = 2;
    //         } else if (longestSequence == prevLongestSequence && sum > maxSum) {
    //             maxSum = sum;
    //             sum = prevDigit + digit;
    //             prevLongestSequence = longestSequence;
    //             longestSequence = 2;
    //         } else {
    //             sum = prevDigit + digit;
    //             longestSequence = 2;
    //         };
            
    //         prevDifferenceBetweenNumbers = differenceBetweenNumbers;
    //         prevDigit = digit;

    //         if (i == number - 1) {
    //             if (longestSequence > prevLongestSequence) {
    //                 maxSum = sum;
    //             } else if (longestSequence == prevLongestSequence && sum > maxSum) {
    //                 maxSum = sum;
    //             };
    //         };
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
