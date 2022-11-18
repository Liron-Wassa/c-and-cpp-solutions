#include<stdio.h>
#include<math.h>

void main() {
    // int sum;
    // int tempNum;
    // int number;
    
    // printf("Enter a number: ");
    // scanf("%d", &number);

    // tempNum = number % 10;
    // number /= 10;
    // sum = tempNum;

    // tempNum = number % 10;
    // number /= 10;
    // sum += tempNum;

    // tempNum = number % 10;
    // sum += tempNum;

    // printf("Sum of all digit is: %d\n", sum);

    // =============================================================================

    // int firstDigit;
    // int secondDigit;
    // int thirdDigit;
    // int number;

    // printf("Enter a number: ");
    // scanf("%d", &number);

    // firstDigit = number % 10;
    // number /= 10;
    // secondDigit = number % 10;
    // number /= 10;
    // thirdDigit = number % 10;

    // printf("Reordered number is: %d%d%d\n", firstDigit, secondDigit, thirdDigit);

    // =============================================================================

    // int numberOfDays;
    // int secondDigit;
    // int thirdDigit;

    // printf("Enter days: ");
    // scanf("%d", &numberOfDays);

    // int daysInYear = 365;
    // int daysInMonth = 30;
    // int years = numberOfDays / daysInYear;
    // int months = (numberOfDays % daysInYear) / daysInMonth;
    // int days = (numberOfDays % daysInYear) % daysInMonth;
    // printf("%d years, %d month, %d days\n", years, months, days);

    // =============================================================================

    // int task1, task2, task3, exam;

    // printf("Enter grade of task1: ");
    // scanf("%d", &task1);
    // printf("Enter grade of task2: ");
    // scanf("%d", &task2);
    // printf("Enter grade of task2: ");
    // scanf("%d", &task2);
    // printf("Enter grade of exam: ");
    // scanf("%d", &exam);

    // int averageGradeOfTasks = (task1 + task2 + task3) / 3;
    // int finalGrade = exam * 0.8 + averageGradeOfTasks * 0.2;

    // printf("Final grade is: %d", finalGrade);

    // =============================================================================

    // double number;

    // printf("Enter a number: ");
    // scanf("%lf", &number);

    // double x2 = number * number;
    // double x4 = x2 * x2;
    // double x6 = x2 * x4;
    // double x8 = x4 * x4;


    // printf("%lf %lf %lf %lf\n", x2, x4, x6, x8);

    // =============================================================================

    // double a, b, c;

    // printf("Enter three numbers: \n");
    // scanf("%lf %lf %lf", &a, &b, &c);

    // double decrement = b * b - 4 * a * c;
    // double result1 = (-b + sqrt(decrement)) / (2 * a);
    // double result2 = (-b - sqrt(decrement)) / (2 * a);

    // if (decrement < 0) {
    //     printf("No solution \n");
    // } else if (decrement == 0) {
    //     printf("One solution \n");
    //     printf("x1 is: %lf", result1);
    // } else {
    //     printf("Two solutions \n");
    //     printf("x1 is: %lf x2 is: %lf", result1, result2);
    // };

    // =============================================================================

    // int lengthOfSide;
    // double slant;
    // int x2;

    // printf("Enter length of side: ");
    // scanf("%d", &lengthOfSide);

    // slant = lengthOfSide * sqrt(2);

    // printf("The slant is: %lf\n", slant);

    // =============================================================================

    // double radius;
    // double perimeter;
    // double volume;
    // double area;

    // printf("Enter a radius: ");
    // scanf("%lf", &radius);

    // area = M_PI * (radius * radius);
    // perimeter = 2 * M_PI * radius;
    // volume = (4 / 3) * M_PI * (radius * radius * radius);

    // printf("Area: %lf Perimeter: %lf Volume: %lf\n", area, perimeter, volume);

    // =============================================================================

    // double a1;
    // double d;
    // double an;
    // int n;

    // printf("Enter a1, d, and n: \n");
    // scanf("%lf%lf%d", &a1, &d, &n);

    // an = a1 + ((n - 1) * d);

    // printf("A%d=%.3lf\n", n, an);

    // =============================================================================

    // double a1;
    // double d;
    // int n;
    // double an;
    // double s;

    // printf("Enter a1, d, and n: \n");
    // scanf("%lf%lf%d", &a1, &d, &n);

    // an = a1 + ((n - 1) * d);
    // s = (n * (a1 + an)) / 2;

    // printf("S=%.3lf\n", s);

    // =============================================================================

    // double a1;
    // double q;
    // int n;
    // double an;

    // printf("Enter a1, q, and n: \n");
    // scanf("%lf%lf%d", &a1, &q, &n);

    // an = a1 * pow(q, (n - 1));

    // printf("A%d=%.1lf\n", n, an);

    // =============================================================================

    // double a1;
    // double q;
    // int n;
    // double an;
    // double s;

    // printf("Enter a1, q, and n: \n");
    // scanf("%lf%lf%d", &a1, &q, &n);

    // an = a1 * pow(q, (n - 1));
    // s = (a1 * (pow(q, n) - 1)) / (q - 1);

    // printf("S=%.1lf\n", s);

    // =============================================================================

    // int number;
    // int firstDigit;
    // int secondDigit;
    // int thirdDigit;
    // int sum;

    // printf("Enter a number: ");
    // scanf("%d", &number);

    // firstDigit = number % 10;
    // number /= 10;
    // secondDigit = number % 10;
    // number /= 10;
    // thirdDigit = number % 10;

    // sum = firstDigit * firstDigit + secondDigit * secondDigit + thirdDigit * thirdDigit;
    // printf("Sum is: %d\n", sum);

    // =============================================================================

    // double d;
    // int num;

    // printf("Enter a number: ");
    // scanf("%lf", &d);

    // printf("Floating point is: %.2lf\n", d - (int)d);

    // =============================================================================

    // double previousSalary;
    // double previousCompensation;
    // long int newSalary;

    // printf("Enter previous salary: ");
    // scanf("%lf", &previousSalary);

    // printf("Enter previous compensation: ");
    // scanf("%lf", &previousCompensation);

    // newSalary = lround(previousSalary * 0.75 + previousCompensation * 0.10);

    // printf("New salary is: %ld\n", newSalary);

    // =============================================================================

    // int number;
    // int firstDigit;
    // int secondDigit;
    // int thirdDigit;

    // printf("Enter a number: ");
    // scanf("%d", &number);

    // if (number < 100) {
    //     printf("The number entered is not a triple-digit\n");
    // } else {
    //     firstDigit = number % 10;
    //     number /= 10;
    //     secondDigit = number % 10;
    //     number /= 10;
    //     thirdDigit = number % 10;

    //     // Assuming we have a triple-digit number, this condition is sufficient
    //     if (firstDigit == thirdDigit) {
    //         printf("%d%d%d is a palindrome\n", thirdDigit, secondDigit, firstDigit);
    //     } else {
    //         printf("%d%d%d is not palindrome\n", thirdDigit, secondDigit, firstDigit);
    //     };
    // };

    // ============================== More elegant solution ============================

    // if (number < 100) {
    //     printf("The number entered is not a triple-digit\n");
    //     return;
    // };

    // firstDigit = number % 10;
    // number /= 10;
    // secondDigit = number % 10;
    // number /= 10;
    // thirdDigit = number % 10;

    // // Assuming we have a triple-digit number, this condition is sufficient
    // if (firstDigit == thirdDigit) {
    //     printf("%d%d%d is a palindrome\n", thirdDigit, secondDigit, firstDigit);
    // } else {
    //     printf("%d%d%d is not palindrome\n", thirdDigit, secondDigit, firstDigit);
    // };

    // =============================================================================
};
