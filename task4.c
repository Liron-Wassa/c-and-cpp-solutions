#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<stdlib.h>
#include<time.h>

int main() {
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

    // =============================================================================
    
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

    // =============================================================================

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

    // =============================================================================

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

    // =============================================================================

    // int i, j, k;

    // for (i = 0; i < 10; i++) {
    //     for (j = i + 1; j < 10; j++) {
    //         for (k = j + 1; k < 10; k++) {
    //             printf("%d,%d,%d\n", i, j, k);
    //         };
    //     };
    // };

    // =============================================================================

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

    // =============================================================================   

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

    // =============================================================================

    // int sum;

    // printf("Enter a sum:\n");
    // scanf("%d", &sum);

    // printf("%d, 20NIS\n", sum / 20);
    // printf("%d, 10NIS\n", (sum % 20) / 10);
    // printf("%d, 5NIS\n", ((sum % 20) % 10) / 5);
    // printf("%d, 2NIS\n", (((sum % 20) % 10) % 5) / 2);
    // printf("%d, 1NIS\n", ((((sum % 20) % 10) % 5) % 2) / 1);

    // =============================================================================

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

    // =============================================================================

    // int number;
    // int sum = 1;
    // int i;

    // printf("Enter a number:\n");
    // scanf("%d", &number);
    
    // for (i = 1; i <= number; i++) {
    //     sum *= i;
    // };

    // printf("%d\n", sum);

    // =============================================================================

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

    // =============================================================================

    int aaa;

    // printf("Enter a number:\n");
    // scanf("%d", &number);
    
    // while (number > 0) {
    //     printf("%d", number % 2);
    //     number /= 2;
    // };

    // =============================================================================

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

    // =============================================================================

    // 4.9

    // =============================================================================

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

    // =============================================================================

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

    // =============================================================================

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

    // =============================================================================

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

    // =============================================================================

    return 0;
};