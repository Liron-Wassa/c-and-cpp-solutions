#include<stdio.h>
#include<math.h>

int main() {

    // void printCompleteNumbers(int number) {
    //     int i;
    //     int reminder = number;

    //     for (i = number / 2; i >= 1; i--) {
    //         if (number % i == 0) {
    //             reminder -= i;
    //         };
    //     };

    //     if (reminder == 0) {
    //         for (i = number / 2; i >= 1; i--) {
    //             if (number % i == 0) {
    //                 printf("%d\n", i);
    //             };
    //         };
    //     };
    // };

    // ============================================================================= class 5.1

    // int n1, n2;
    // char operator;

    // printf("Enter a number:\n");
    // scanf("%d", &n1);

    // printf("Enter a second number:\n");
    // scanf("%d", &n2);

    // printf("Enter operator e.g. (+, -, *, /, modulo):\n");
    // scanf(" %c", &operator);

    // double calculate(int n1, int n2, char operator) {
    //     if ((operator == '/' || operator == '%') && n2 == 0) {
    //         printf("Can't be divided by 0\n");
    //         return 0;
    //     };

    //     if (operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != '%') {
    //         printf("Invalid operator\n");
    //         return 0;
    //     };

    //     if (operator == '+') {
    //         return n1 + n2;
    //     } else if (operator == '-') {
    //         return n1 - n2;
    //     } else if (operator == '*') {
    //         return n1 * n2;
    //     } else if (operator == '%') {
    //         return n1 % n2;
    //     } else {
    //         return n1 / n2;
    //     };
    // };

    // printf("Result is: %lf\n", calculate(n1, n2, operator));
    
    // ============================================================================= class 5.2

    // int number;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // int revertNumber(int number) {
    //     int firstDigit, revertNumber = 0;
    //     int numbersDigit = log10(number);
    //     int sumOfDigit = pow(10, numbersDigit);

    //     while (number > 0) {
    //         firstDigit = number % 10;
    //         revertNumber += sumOfDigit * firstDigit;
    //         sumOfDigit /= 10;
    //         number /= 10;
    //     };

    //     return revertNumber;
    // };

    // printf("Reverted number is:%d\n", revertNumber(number));

    // ============================================================================= class 5.3

    // int number;
    
    // printf("Enter a number:\n");
    // scanf("%d", & number);

    // int calculateSumOfDivisionNumber(int number) {
    //     int i, sum = 0;

    //     for (i = number / 2; i >= 1; i--) {
    //         if (number % i == 0) {
    //             sum += i;
    //         };
    //     };

    //     return sum;
    // };

    // printf("Result is: %d\n", calculateSumOfDivisionNumber(number));

    // ============================================================================= class 5.4

    // int number;
    
    // printf("Enter a number:\n");
    // scanf("%d", & number);

    // int isPrimeNumber(int number) {
    //     if (number == 0 || number == 1) return 0;

    //     int maxDivision = sqrt(number), i;

    //     for (i = 2; i <= maxDivision; i++) {
    //         if (number % i == 0) {
    //             return 0;
    //         };
    //     };

    //     return 1;
    // };

    // printf("%d\n", isPrimeNumber(number));

    // ============================================================================= class 5.5

    // int GCD3(int num1, int num2, int num3) {
    //     int i;
    
    //     int maxIterator = num1 > num2 && num3 ? num1 : num2 > num1 && num3 ? num2 : num3;

    //     for (i = maxIterator; i >= 2; i--) {
    //         if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0) {
    //             return i;
    //         };
    //     };

    //     return 1;
    // };

    // printf("Max common divider is: %d\n", GCD3(15, 5, 20));

    // ============================================================================= laboratory 5.1

    // double square(double num) {
    //     int i;
    //     double result = 1;

    //     for (i = 0; i < 2; i++) {
    //         result *= num;
    //     };

    //     return result;
    // };

    // double cube(double num) {
    //     int i;
    //     double result = 1;

    //     for (i = 0; i < 3; i++) {
    //         result *= num;
    //     };

    //     return result;
    // };

    // double power(double num, int pwr) {
    //     int i;
    //     double result = 1;

    //     for (i = 0; i < pwr; i++) {
    //         result *= num;
    //     };

    //     return result;
    // };

    // ============================================================================= laboratory 5.2

    // int number;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // int isEven(int number) {
    //     return number % 2 == 0;
    // };

    // int isOdd(int number) {
    //     return number % 2 != 0;
    // };

    // printf("The number is even: %d\n", isEven(number));
    // printf("The number is odd %d\n", isOdd(number));

    // ============================================================================= laboratory 5.3

    // int number;

    // printf("Enter a number:\n");
    // scanf("%d", &number);

    // long getDigits(int digit) {
    //     int digits = pow(10, digit - 1), i;
    //     int result = 0;

    //     for (i = 0; i < digit; i++) {
    //         result += digits;
    //         digits /= 10;
    //     };

    //     return result;
    // };

    // printf("Result is: %ld\n", getDigits(number));

    // ============================================================================= laboratory 5.4
    
    // char ch;

    // printf("Enter a lower char:\n");
    // scanf("%c", &ch);

    // int myToLower(char ch) {
    //     if (ch >= 65 && ch <= 90) {
    //         return -1;
    //     };

    //     return ch - 32;
    // };

    // int myToUpper(char ch) {
    //     if (ch >= 97 && ch <= 122) {
    //         return -1;
    //     };

    //     return ch + 32;
    // };

    // printf("Convert to lower case:%c\n", myToLower(ch));
    // printf("Convert to upper case:%c\n", myToUpper(ch));

    // ============================================================================= laboratory 5.5

    // char c1, c2, c3;

    // printf("Enter a lower char:\n");
    // scanf("%c", &c1);
    // scanf(" %c", &c2);
    // scanf(" %c", &c3);

    // int createTripleNumber(char c1, char c2, char c3) {
    //     if (c1 >= 48 && c1 <= 57 && c2 >= 48 && c2 <= 57 && c3 >= 48 && c3 <= 57) {
    //         return ((c1 - 48) * 100) + ((c2 - 48) * 10) + (c3 - 48);
    //     };

    //     return -1;
    // };


    // printf("Convert to numbers:%d\n", createTripleNumber(c1, c2, c3));

    // ============================================================================= laboratory 5.6

    // int num1, num2;

    // printf("Enter a number:\n");
    // scanf("%d", num1);
    // printf("Enter a number:\n");
    // scanf("%d", num2);

    // int sumOfGCD(int num1, int num2) {
    //     int i, results = 1;
    
    //     int maxIterator = num1 > num2 ? num1 : num2;

    //     for (i = maxIterator; i >= 2; i--) {
    //         if (num1 % i == 0 && num2 % i == 0) {
    //             results += i;
    //         };
    //     };

    //     return results;
    // };

    // printf("Max common divider is: %d\n", sumOfGCD(num1, num2));

    // ============================================================================= laboratory 5.7

    // int num1;

    // printf("Enter a number:\n");
    // scanf("%d", &num1);

    // int isNumberOfDivisionIsOdd(int num1) {
    //     int numberOfDivision =  roundf(sqrt(num1) - 2);
    //     return numberOfDivision % 2 != 0;
    // };

    // printf("Number of division is odd: %d\n", isNumberOfDivisionIsOdd(num1));

    // ============================================================================= laboratory 5.8

    // int number;
    
    // printf("Enter a number:\n");
    // scanf("%d", & number);

    // int getMinimumDivision(int number) {
    //     if (number == 0 || number == 1) return 0;

    //     int maxDivision = sqrt(number), i;

    //     for (i = 2; i <= maxDivision; i++) {
    //         if (number % i == 0) {
    //             return i;
    //         };
    //     };

    //     return number;
    // };

    // printf("Minimum division is: %d\n", getMinimumDivision(number));

    // ============================================================================= laboratory 5.9

    // int number;
    
    // printf("Enter a number:\n");
    // scanf("%d", & number);

    // int getMaximumDivision(int number) {
    //     if (number == 0 || number == 1) return 0;

    //     int maxDivision = sqrt(number), i;

    //     for (i = 2; i <= maxDivision; i++) {
    //         if (number % i == 0) {
    //             return number / i;
    //         };
    //     };

    //     return 1;
    // };

    // printf("Maximum division is: %d\n", getMaximumDivision(number));

    // ============================================================================= laboratory 5.10

    // int num1, num2;

    // printf("Enter numbers:\n");
    // scanf("%d%d", &num1, &num2);

    // int GCD2(int num1, int num2) {
    //     int i;
    
    //     int maxIterator = num1 > num2 ? num1 : num2;

    //     for (i = maxIterator; i >= 2; i--) {
    //         if (num1 % i == 0 && num2 % i == 0) {
    //             return i;
    //         };
    //     };

    //     return 1;
    // };

    // void printSmallestFraction(int numerator, int denominator) {
    //     if (denominator == 0) {
    //         printf("Can't divide by zero\n");
    //     } else {
    //         int maxCommonDivision = GCD2(numerator, denominator);

    //         printf("%d/%d\n", (numerator / maxCommonDivision), (denominator / maxCommonDivision));
    //     };
    // };

    // printSmallestFraction(num1, num2);

    // ============================================================================= laboratory 5.11

    // int num1, num2;

    // printf("Enter numbers:\n");
    // scanf("%d%d", &num1, &num2);

    // int GCD2(int num1, int num2) {
    //     int i;
    
    //     int maxIterator = num1 > num2 ? num1 : num2;

    //     for (i = maxIterator; i >= 2; i--) {
    //         if (num1 % i == 0 && num2 % i == 0) {
    //             return i;
    //         };
    //     };

    //     return 1;
    // };

    // void printSmallestMultiplication(int num1, int num2) {
    //     int maxCommonDivision = GCD2(num1, num2);

    //     printf("%d\n", num1 * num2 / maxCommonDivision);
    // };

    // printSmallestMultiplication(num1, num2);

    // ============================================================================= additional 5.1

    // int number;

    // printf("Enter a number\n");
    // scanf("%d", &number);

    // int getNumberOfDigit(int number) {
    //     int digitNumbers = floor(log10(number)) + 1;
    //     return digitNumbers;
    // };

    // printf("Number of digits is: %d\n", getNumberOfDigit(number));

    // ============================================================================= additional 5.4

    // int number;

    // printf("Enter a number\n");
    // scanf("%d", &number);

    // int getBinaryValue(int number) {
    //     int i, binaryDigit, prevBinaryDigit, startIndex = -1;
    //     int maxZero = 0, maxOne = 0;
        
    //     for (i = 0; i < number; i++) {
    //         printf("Enter a binary digit\n");
    //         scanf("%d", &binaryDigit);
            
    //         if (binaryDigit == 0 && prevBinaryDigit != binaryDigit) {
    //             startIndex = i;
    //             maxZero = 0;
    //         };

    //         if (binaryDigit == 0) {
    //             maxZero++;
    //         };

    //         prevBinaryDigit = binaryDigit;
    //     };

    //     printf("Start at: %d\n", startIndex);
    //     return maxZero;
    // };

    // getBinaryValue(number);

    // ============================================================================= additional 5.5

    // int number;

    // printf("Enter a number\n");
    // scanf("%d", &number);

    // int getSumOfConsecutiveValues(int number) {
    //     int i, digit, prevDigit = 0, startIndex = -1;
    //     int max = 0;
        
    //     for (i = 0; i < number; i++) {
    //         printf("Enter a digit\n");
    //         scanf("%d", &digit);

    //         if (prevDigit + digit >= max) {
    //             max = prevDigit + digit;
    //             startIndex = i;
    //         };

    //         prevDigit = digit;
    //     };

    //     printf("Start at: %d, %d\n", startIndex, startIndex + 1);
    //     return max;
    // };

    // getSumOfConsecutiveValues(number);

    return 0;
};
