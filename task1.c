#include<stdio.h>

void main() {
    double PI = 3.141592;
    printf("%.2lf\n", PI);
    // =============================================================================

    // swapping values using two variables
    int a = 3;
    int b = 4;

    printf("a before: %d b before: %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a after: %d b after: %d", a, b);
    
    // =============================================================================

    int num1 = 6, num2 = 2;
    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    float div = (float)num1 / num2;
    int reminder = num1 % num2;

    printf("Sum: %d \n", sum);
    printf("Sub: %d \n", sub);
    printf("Div: %f \n", div);
    printf("Mul: %d \n", mul);
    printf("Reminder %d \n", reminder);

    // =============================================================================

    int currentYear = 2022;
    int age = 26;
    int birthYear = currentYear - age;

    printf("My birth year is: %d\n", birthYear);

    // =============================================================================

    long id = 123456;
    double salaryPerHour = 50.23585;
    int startedWorkingYear = 2018;
    int layoffYear = 2022;
    int workHours = 8;
    int workDaysInWeek = 6;
    int month = 4;
    
    double salaryPerDay = workHours * salaryPerHour;
    double salaryPerWeek = salaryPerDay * workDaysInWeek;
    double salaryPerMonth = salaryPerWeek * month;
    int totalWorkYears = layoffYear - startedWorkingYear;
    double compensation = salaryPerMonth * totalWorkYears;

    printf("Bob compensation is: %lf, id: %ld\n", compensation, id);

    // ==============================================================================

    int amountOfItemA = 10;
    int amountOfItemB = 2;
    double priceOfItemA = 2.0;
    double priceOfItemB = 2.5;

    double totalPriceA = amountOfItemA * priceOfItemA;
    double totalPriceB = amountOfItemB * priceOfItemB;
    int totalItems = amountOfItemA + amountOfItemB;
    double averagePricePerItem = (totalPriceA + totalPriceB) / totalItems;

    printf("Average price per item is: %lf\n", averagePricePerItem);

    // ==============================================================================

    int totalDistanceInKM = 120;
    int carSpeed = 80;
    float second = 60.0;
    int hours = totalDistanceInKM / carSpeed;
    int minutes = (totalDistanceInKM % carSpeed) / (carSpeed / second);

    printf("Arrival time in %d hour and %d minutes\n", hours, minutes);
};
