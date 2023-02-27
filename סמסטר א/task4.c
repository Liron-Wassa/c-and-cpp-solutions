#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<stdlib.h>
#include<time.h>

int main() {
    // ============================================================================= class 4.1

    // int counter;
    // int sumOfNumbersDividedBy3And5 = 0;
    // int sumOfNumbersDividedBy3Or5 = 0;

    // for (counter = 1; counter <= 1000; counter++) {
    //     if ((counter % 3 == 0) && (counter % 5 == 0)) {
    //         sumOfNumbersDividedBy3And5 += counter;
    //     };
    
    //     if (((counter % 3 == 0) && (counter % 5 == 0)) || ((counter % 3 == 0) || (counter % 5 == 0))) {
    //         sumOfNumbersDividedBy3Or5 += counter;
    //     };
    // };

    // printf("The sum of numbers divided by 3 and five is: %d\n", sumOfNumbersDividedBy3And5);
    // printf("The sum of numbers divided by 3 or five is: %d\n", sumOfNumbersDividedBy3Or5);

    // ============================================================================= class 4.2
    
    // int number;
    // int naturalNumber;
    // int previousNumber = 0;

    // int ascendingSpecificity = 0;
    // int veryAscendingSpecificity = 0;
    // int notAscendingSpecificity = 0;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // do {
    //     printf("Enter natural number:\n");
    //     scanf("%d", &naturalNumber);

    //     if (naturalNumber > previousNumber) {
    //         veryAscendingSpecificity = 1;
    //     } else if (naturalNumber == previousNumber) {
    //         ascendingSpecificity = 1;
    //     } else {
    //         notAscendingSpecificity = 1;
    //     };

    //     previousNumber = naturalNumber;
    //     number--;
    // } while(number > 0);


    // if (notAscendingSpecificity == 1) {
    //     printf("Not ascending\n");
    // } else if (ascendingSpecificity == 1) {
    //     printf("Ascending\n");
    // } else {
    //     printf("Very ascending\n");
    // };

    // ============================================================================= class 4.3

    // int number;
    // int sumOfEvenNumbers = 0;
    // int sumOfOddNumbers = 0;
    // int firstDigit;
    // int isEvenNumber;

    // printf("Enter a number: \n");
    // scanf("%d", &number);

    // while(number != 0) {
    //     firstDigit = number % 10;
    //     isEvenNumber = firstDigit % 2 == 0;

    //     if (isEvenNumber) {
    //         sumOfEvenNumbers += firstDigit;
    //     } else {
    //         sumOfOddNumbers += firstDigit;
    //     };

    //     number /= 10;
    // };

    // printf("Results is: %d\n", sumOfEvenNumbers - sumOfOddNumbers);

    // ============================================================================= class 4.4

    // int binaryNumber;
    // int positionNumber = 0;
    // int tempDecimalForm = 0;
    // int decimalFormResult = 0;
    // int firstDigit;

    // printf("Enter a number in binary format:\n");
    // scanf("%d", &binaryNumber);

    // while (binaryNumber > 0) {
    //     firstDigit = binaryNumber % 10;
    //     tempDecimalForm = firstDigit * pow(2, positionNumber);
    //     decimalFormResult += tempDecimalForm;
    //     positionNumber++;
    //     binaryNumber /= 10;
    // };

    // printf("Decimal form is: %d\n", decimalFormResult);

    // ============================================================================= class 4.5

    // int i, j, k;

    // for (i = 0; i < 10; i++) {
    //     for (j = i + 1; j < 10; j++) {
    //         for (k = j + 1; k < 10; k++) {
    //             printf("%d,%d,%d\n", i, j, k);
    //         };
    //     };
    // };

    // ============================================================================= laboratory 4.1

    // int number;
    // int i;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // for (i = number; i >= 1; i--) {
    //     if (i % 15 == 0) {
    //         printf("FizzBuzz\n");
    //     } else if (i % 5 == 0) {
    //         printf("Buzz\n");
    //     } else if (i % 3 == 0) {
    //         printf("Fizz\n");
    //     } else {
    //         printf("%d\n", i);
    //     };
    // };

    // ============================================================================= laboratory 4.2 

    // int number;

    // printf("Enter a number:\n");
    // scanf("%d", &number);
    
    // int i;

    // for (i = 0; i < 1000 + 25; i % 25 == 0 ? i += 25 : i++) {
    //     if (number < i) {
    //         printf("The number you entered (%d) is associate to group: [%d, %d]\n", number, i - i, i);
    //         break;
    //     };
    // };

    // ============================================================================= laboratory 4.3

    // int sum;

    // printf("Enter a sum:\n");
    // scanf("%d", &sum);

    // printf("%d, 20NIS\n", sum / 20);
    // printf("%d, 10NIS\n", (sum % 20) / 10);
    // printf("%d, 5NIS\n", ((sum % 20) % 10) / 5);
    // printf("%d, 2NIS\n", (((sum % 20) % 10) % 5) / 2);
    // printf("%d, 1NIS\n", ((((sum % 20) % 10) % 5) % 2) / 1);

    // ============================================================================= laboratory 4.4

    // int number;
    // int sum = 0;

    // do {
    //     printf("Enter a number:\n");
    //     scanf("%d", &number);

    //     if (number % 2 != 0 && number % 3 != 0) {
    //         sum += number;
    //     };

    // } while(number != -1);

    // printf("The sum is: %d\n", sum);

    // ============================================================================= laboratory 4.5

    // int number;
    // int sum = 1;
    // int i;

    // printf("Enter a number:\n");
    // scanf("%d", &number);
    
    // for (i = 1; i <= number; i++) {
    //     sum *= i;
    // };

    // printf("%d\n", sum);

    // ============================================================================= laboratory 4.6

    // int number;
    // int numberEntered = 0;
    // int max = INT_MIN;
    // int min = INT_MAX;

    // printf("Enter a number:\n");
    // scanf("%d", &number);
    
    // while (number != -1) {
    //     printf("Enter a number:\n");
    //     scanf("%d", &number);

    //     if (number != -1) {
    //         if (number > max) {
    //             max = number;
    //         } else {
    //             min = number;
    //         };

    //         numberEntered++;
    //     };
    // };

    // if (numberEntered == 0) {
    //     printf("0 numbers, no max nor min\n");
    // } else {
    //     printf("%d numbers, max = %d min = %d\n", numberEntered, max, min);
    // };

    // ============================================================================= laboratory 4.7
    
    // int number, binaryFormat = 0, numberDigits = 0, numberPosition = 0;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // while (number > 0) {
    //     if (number % 2 != 0) {
    //         numberDigits = pow(10, numberPosition);
    //         binaryFormat += numberDigits * (number % 2);
    //     };

    //     numberPosition++;
    //     number /= 2;
    // };

    // printf("%d\n", binaryFormat);

    // ============================================================================= laboratory 4.8

    // double a1, q, an, s, exponentQ = 1;
    // int n, i;

    // printf("Enter a a1:\n");
    // scanf("%lf", &a1);

    // printf("Enter a q:\n");
    // scanf("%lf", &q);

    // printf("Enter a n:\n");
    // scanf("%d", &n);

    // for (i = 0; i < n; i++) {
    //     exponentQ *= q;
    // };
    
    // an = a1 * (exponentQ / q);
    // s = (a1 * (exponentQ - 1)) / (q - 1);
    
    // printf("A%d = %.1lf S = %.1lf\n", n, an, s);

    // ============================================================================= laboratory 4.9

    // int n, denominator;
    // double numerator;
    // double an;
    // double sum = 1;

    // printf("Enter a number:\n");
    // scanf("%d", &n);

    // if (n % 2 == 0) {
    //     printf("Only odd numbers is expected\n");
    // } else {
    //     numerator = pow(2, n -1);
    //     denominator = 2 * n - 1;
    //     an = numerator / denominator;

    //     while (an != 1) {
    //         sum += an;
    //         numerator /= 2;
    //         denominator -= 2;
    //         an = numerator / denominator;
    //     };

    //     printf("The sum is: %lf\n", sum);
    // };

    // ============================================================================= laboratory 4.10

    // int number;
    // int digit;
    // int max = INT_MIN;
    // int min = INT_MAX;
    // int numberPosition = -1;
    // int minPosition;
    // int maxPosition;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // while (number > 0) {
    //     digit = number % 10;
    //     numberPosition++;

    //     if (digit >= max) {
    //         max = digit;
    //         maxPosition = numberPosition;
    //     } else if (digit < min) {
    //         min = digit;
    //         minPosition = numberPosition;
    //     };

    //     number /= 10;
    // };

    // printf("Max = %d, at position: %d, Min = %d, at position: %d\n", max, maxPosition, min, minPosition);

    // ============================================================================= laboratory 4.11

    // int number;
    // int digit;
    // int max = INT_MIN;
    // int min = INT_MAX;
    // int numberPosition = -1;
    // int minPosition;
    // int maxPosition;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // while (number > 0) {
    //     digit = number % 10;
    //     numberPosition++;

    //     if (digit > max) {
    //         max = digit;
    //         maxPosition = numberPosition;
    //     } else if (digit < min) {
    //         min = digit;
    //         minPosition = numberPosition;
    //     };

    //     number /= 10;
    // };

    // printf("Max = %d, at position: %d, Min = %d, at position: %d\n", max, maxPosition, min, minPosition);

    // ============================================================================= laboratory 4.12

    // int number;
    // float sumOfEvenNumbers = 1;
    // float sumOfOddNumbers = 1;
    // int firstDigit;
    // int isEvenNumber;

    // printf("Enter a number: \n");
    // scanf("%d", &number);

    // while(number != 0) {
    //     firstDigit = number % 10;
    //     isEvenNumber = firstDigit % 2 == 0;

    //     if (isEvenNumber) {
    //         sumOfEvenNumbers *= firstDigit;
    //     } else {
    //         sumOfOddNumbers *= firstDigit;
    //     };

    //     number /= 10;
    // };

    // printf("Results is: %.2f\n", sumOfEvenNumbers / sumOfOddNumbers);

    // ============================================================================= laboratory 4.13

    // srand(time(NULL));
    // int answer = rand() % 10 + 1;
    // int count = 0;
    // int guess;

    // printf("%d", answer);
    
    // do {
    //     printf("Enter a number: \n");
    //     scanf("%d", &guess);
    //     count++;
    // } while (answer != guess);

    // switch (count) {
    //     case 1: {
    //         printf("I believe you have cheated...\n");
    //         break;
    //     };
    //     case 2:
    //     case 3: {
    //         printf("Excellent game!\n");
    //         break;
    //     };
    //     case 4:
    //     case 5: {
    //         printf("You played well!\n");
    //         break;
    //     };
    //     case 6:
    //     case 7: {
    //         printf("Average game.\n");
    //         break;
    //     };
    //     case 8:
    //     case 9:
    //     case 10: {
    //         printf("Poor game.\n");
    //         break;
    //     };

    //     default: {
    //         printf("Seriously? Ther are only ten choices...\n");
    //     };     
    // };

    // =============================================================================

    // int i, j, levels;
    // char asterisk = '*';

    // printf("Enter pyramid level:\n");
    // scanf("%d", &levels);

    // for (i = levels; i >= 0; i--) {
    //     printf("%*s", i, "");

    //     for (j = levels - i; j > 0; j--) {
    //         printf("%c", asterisk);
    //         printf(" ");
    //     };

    //     printf("\n");
    // };

    // ============================================================================= additional 4.1

    // int number, binaryFormat = 0, fourBaseFormat = 0, eightBaseFormat = 0, numberDigits = 0, numberPosition = 0;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // while (number > 0) {
    //     if (number % 2 != 0) {
    //         numberDigits = pow(10, numberPosition);
    //         binaryFormat += numberDigits * (number % 2);
    //     };

    //     numberPosition++;
    //     number /= 2;
    // };

    // while (number > 0) {
    //     if (number % 4 != 0) {
    //         numberDigits = pow(10, numberPosition);
    //         fourBaseFormat += numberDigits * (number % 4);
    //     };

    //     numberPosition++;
    //     number /= 4;
    // };

    // while (number > 0) {
    //     if (number % 8 != 0) {
    //         numberDigits = pow(10, numberPosition);
    //         eightBaseFormat += numberDigits * (number % 8);
    //     };

    //     numberPosition++;
    //     number /= 8;
    // };

    // printf("Base 2: %d\n", binaryFormat);
    // printf("Base 4: %d\n", fourBaseFormat);
    // printf("Base 8: %d\n", eightBaseFormat);

    // ============================================================================= additional 4.2

    // int number, binaryNumber, prevBinaryNum, counter = 0, counterOne = 0, counterZero = 0, maxOne = 0, maxZero = 0;
    
    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // do {
    //     printf("Enter a binary number:\n");
    //     scanf("%d", &binaryNumber);

    //     if (binaryNumber != prevBinaryNum && binaryNumber == 1) {
    //         counterOne = 0;
    //         counterOne++;
    //     } else if(binaryNumber != prevBinaryNum && binaryNumber == 0) {
    //         counterZero = 0;
    //         counterZero++;
    //     };

    //     if (binaryNumber == prevBinaryNum && binaryNumber == 1) {
    //         counterOne++;
    //     } else if (binaryNumber == prevBinaryNum && binaryNumber == 0) {
    //         counterZero++;
    //     };

    //     maxOne = maxOne > counterOne ? maxOne : counterOne;
    //     maxZero = maxZero > counterZero ? maxZero : counterZero;
        
    //     prevBinaryNum = binaryNumber;
    //     counter++;
    // } while(counter < number);

    // printf("Length of longest sequence of 1 is: %d, and of 0 is: %d\n", maxOne, maxZero);

    // ============================================================================= additional 4.3

    // int number, prevNum, risingSeriesSum = 0, counter = 0;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // if (number != -1) {
    //     risingSeriesSum = 1;
    // };

    // while (number != -1) {
    //     if (number > prevNum) {
    //         counter++;
    //     } else {
    //        counter = 1;
    //     };

    //     risingSeriesSum = risingSeriesSum > counter ? risingSeriesSum : counter;
    //     prevNum = number;

    //     printf("Enter a number:\n");
    //     scanf("%d", &number);
    // };

    // printf("Longest rising subseries is: %d\n", risingSeriesSum);

    // ============================================================================= additional 4.4

    // int number, prevNum, risingSeriesSum = 0, tempRisingSeriesSum = 0;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // if (number != -1) {
    //     risingSeriesSum = number;
    // };

    // while (number != -1) {
    //     if (number > prevNum) {
    //         tempRisingSeriesSum += number;
    //     } else {
    //        tempRisingSeriesSum = number;
    //     };

    //     risingSeriesSum = risingSeriesSum > tempRisingSeriesSum ? risingSeriesSum : tempRisingSeriesSum;
    //     prevNum = number;

    //     printf("Enter a number:\n");
    //     scanf("%d", &number);
    // };

    // printf("Longest rising subseries sum is: %d\n", risingSeriesSum);

    // ============================================================================= additional 4.5

    // int number, sumOfSeries = 0, result = 0, isMatchNumberExist = 0;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // while (number != -1) {
    //     if (number == sumOfSeries) {
    //         result = number;
    //         isMatchNumberExist = 1;
    //     };

    //     sumOfSeries += number;

    //     printf("Enter a number:\n");
    //     scanf("%d", &number);
    // };

    // if (isMatchNumberExist) {
    //     printf("Number is: %d\n", result);
    // } else {
    //     printf("No such number exists\n");
    // };

    // ============================================================================= additional 4.6

    // int number, muchNumber, prevNumber, prevPrevNumber, muchPrevNumber, sumOfSeries = 0, result = 0, isMatchNumberExist = 0, counter = 0;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // while (number != -1) {
    //     if (number == sumOfSeries) {
    //         muchNumber = number;
    //         muchPrevNumber = prevNumber;
    //         result = muchNumber - muchPrevNumber;
    //         isMatchNumberExist = 1;
    //     };
        
    //     if (counter > 1 && counter % 2 == 0) {
    //         sumOfSeries -= prevPrevNumber;
    //     } else {
    //         sumOfSeries += number;
    //     };

    //     prevPrevNumber = prevNumber;
    //     prevNumber = number;
    //     counter++;
    
    //     printf("Enter a number:\n");
    //     scanf("%d", &number);
    // };

    // if (isMatchNumberExist) {
    //     printf("%d - %d = %d\n", muchNumber, muchPrevNumber, result);
    // } else {
    //     printf("No such pair exists\n");
    // };

    // ============================================================================= additional 4.7

    // int i, n;
    // double a1, an, sum, x, power = 1;

    // printf("Enter n:\n");
    // scanf("%d", &n);

    // printf("Enter x:\n");
    // scanf("%lf", &x);

    // for (i = 0; i < 2 * n - 1; i++) {
    //     power *= x;
    // };

    // a1 = 1 / x;
    // an = 1 / ((2 * n - 1) * power);
    // sum = (n * (a1 + an)) / 2;
    
    // printf("Sum is: %lf\n", sum);

    // ============================================================================= additional 4.8

    int i, n;
    double a1, an, sum, x, power = 1, sign = 1, assembly = 1;

    printf("Enter n:\n");
    scanf("%d", &n);

    printf("Enter x:\n");
    scanf("%lf", &x);

    for (i = 2 * n - 2; i > 1; i--) {
        assembly *= i;
        power *= x;
    };
    
    if (n % 2 == 0) {
        sign = -1;
    };

    power *= x;

    a1 = x;
    an = sign * (power / assembly);
    // sum = (n * (a1 + an)) / 2;
    
    printf("Sum is: %lf\n", sum);

    return 0;
};