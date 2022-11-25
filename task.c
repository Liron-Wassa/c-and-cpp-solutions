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
    //     int prevLongestSequence = 0;
    //     int sum = 0;
    //     int maxSum = 0;

    //     for (i = 0; i < number; i++) {
    //         printf("Enter a number:\n");
    //         scanf("%d", &digit);

    //         if (number == 1) return digit;

    //         differenceBetweenNumbers = digit - prevDigit;

    //         if (differenceBetweenNumbers == prevDifferenceBetweenNumbers) {
    //             sum += digit;
    //             longestSequence++;
    //         } else if (longestSequence > prevLongestSequence) {
    //             maxSum = sum;
    //             sum = prevDigit + digit;
    //             prevLongestSequence = longestSequence;
    //         } else {
    //             sum = prevDigit + digit;
    //             longestSequence = 2;
    //         };
            
    //         prevDifferenceBetweenNumbers = differenceBetweenNumbers;
    //         prevDigit = digit;
    //     };

    //     if (prevLongestSequence > 2) {
    //         return maxSum;
    //     } else {
    //         return sum;
    //     };
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
