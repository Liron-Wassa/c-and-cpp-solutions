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

    // int validateId (int id) {
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

    // void printId (int number, int zeroPrefix) {
    //     int i, digit;
    //     for (i = 0; i < zeroPrefix; i++)
    //     {
    //         printf("0");
    //     };

    //     while (number > 0)
    //     {
    //         digit = number % 10;
    //         printf("%c", 48 + digit);
    //         number /= 10;
    //     };

    //     printf("\n");
    // };

    // int revertNumber (int number) {
    //     int digit, revertedNumber = 0, numberDigit = log10(number), powDigit = pow(10, numberDigit);

    //     while (number > 0)
    //     {
    //         digit = number % 10;
    //         revertedNumber += digit * powDigit;
    //         powDigit /= 10;
    //         number /= 10;
    //     };

    //     return revertedNumber;
    // };

    // int numberLength(int number) {
    //     return (int)log10(number) + 1;
    // };

    // int checkID (int id) {
    //     int revertedNumber, numberDigit = numberLength(id), numberZeroToPrint = 0;

    //     if (numberDigit < 9)
    //     {
    //         numberZeroToPrint = 9 - numberDigit;
    //     };

    //     revertedNumber = revertNumber(id);
    //     printId(revertedNumber, numberZeroToPrint);

    //     return validateId(id);
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
