#include<stdio.h>
#include<math.h>

int main() {
    // int n1;
    // int n2;
    // int n3;

    // printf("Enter three numbers:\n");
    // scanf("%d%d%d", &n1, &n2, &n3);

    // if (n1 > n2 && n1 > n3) {
    //     printf("Max number is: %d\n", n1);
    // } else if (n2 > n1 && n2 > n3) {
    //     printf("Max number is: %d\n", n2);
    // } else {
    //     printf("Max number is: %d\n", n3);
    // };

    // =============================================================================

    // int n1;
    // int n2;

    // printf("Enter two numbers:\n");
    // scanf("%d%d", &n1, &n2);

    // if ((n1 % 2 == 0) && (n2 % 2 == 0) && n2 != 0 && (n1 % n2 == 0)) {
    //     printf("Valid numbers\n");
    // } else {
    //     printf("Invalid numbers\n");
    // };

    // =============================================================================

    // int number;
    // int firstDigit, secondDigit, thirdDigit;

    // printf("Enter triple-number:\n");
    // scanf("%d", &number);

    // if (number < 100) {
    //     printf("Invalid input\n");
    //     return 0;
    // };
    
    // firstDigit = number % 10;
    // number /= 10;
    // secondDigit = number % 10;
    // number /= 10;
    // thirdDigit = number % 10;
    
    // if ((thirdDigit < secondDigit) && (secondDigit < firstDigit)) {
    //     printf("Very ascending\n");
    // } else if ((thirdDigit < secondDigit) && (secondDigit == firstDigit)) {
    //     printf("Ascending\n");
    // } else if ((thirdDigit > secondDigit) && (secondDigit > firstDigit)) {
    //     printf("Very descending\n");
    // } else if ((thirdDigit > secondDigit) && (secondDigit == firstDigit)) {
    //     printf("Descending\n");
    // } else {
    //     printf("Digit neither ascending nor descending\n");
    // };

    // =============================================================================

    // int seconds;
    // int minutes;
    // int hours;

    // printf("Enter a seconds:\n");
    // scanf("%d", &seconds);

    // hours = seconds / 3600;
    // minutes = (seconds % 3600) / 60;
    // seconds = ((seconds % 3600) % 60);

    // printf(hours < 10 ? "0%d:" : "%d:", hours);
    // printf(minutes < 10 ? "0%d:" : "%d:", minutes);
    // printf(seconds < 10 ? "0%d\n" : "%d\n", seconds);

    // =============================================================================

    // int day, month, year;

    // printf("Enter a day:\n");
    // scanf("%d", &day);

    // printf("Enter a month:\n");
    // scanf("%d", &month);

    // printf("Enter a year:\n");
    // scanf("%d", &year);

    // const int isYearLeap = ((year % 4 == 0) && year % 100 != 0) || (year % 400 == 0);
    // const int febDaysInMonth = isYearLeap ? 29 : 28;
    // const int is31DaysInMonth = month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12;

    // if (is31DaysInMonth && day < 31) {
    //     day++;
    // } else if (is31DaysInMonth && month < 12) {
    //     day = 1;
    //     month++;
    // } else if (is31DaysInMonth && month == 12 && day == 31) {
    //     day = 1;
    //     month = 1;
    //     year++;
    // } else if (month == 2 && day < febDaysInMonth) {
    //     day++;
    // } else if (month == 2 && day == febDaysInMonth) {
    //     day = 1;
    //     month++;
    // } else if (day < 30) {
    //     day++;
    // } else {
    //     day = 1;
    //     month++;
    // };

    // printf("%d/%d/%d\n", day, month, year);

    // =============================================================================

    // int number;

    // printf("Enter a number: \n");
    // scanf("%d", &number);

    // if (number < 0) {
    //     number = number * -1;
    // };

    // printf("Absolute number is: %d\n", number);

    // =============================================================================

    // double price;
    // int quantity;

    // printf("Enter a price: \n");
    // scanf("%lf", &price);

    // printf("Enter quantity: \n");
    // scanf("%d", &quantity);

    // if (quantity >= 50) {
    //     price -= price * 0.5;
    // } else if (quantity < 50 && quantity > 25) {
    //     price -= price * 0.2;
    // } else if (quantity < 25 && quantity > 10) {
    //     price -= price * 0.05;
    // };

    // printf("The price is: %lf\n", price);

    // =============================================================================

    // int number;

    // printf("Enter a number: \n");
    // scanf("%d", &number);

    // int isValidNumber = ((number % 2 == 0) && (number % 3 == 0) && (number % 5 != 0)) ||
    // ((number % 2 != 0) && (number % 7 != 0) && (number % 11 != 0));

    // if (isValidNumber) {
    //     printf("Valid number\n");
    // } else {
    //     printf("Invalid number\n");
    // };

    // =============================================================================\

    // int n1, n2, n3;

    // printf("Enter a three numbers: \n");
    // scanf("%d%d%d", &n1, &n2, &n3);

    // int isValidNumber = ((n1 % n2 == 0) || (n2 % n1 == 0)) && ((n2 % n3 == 0) || (n3 % n2 == 0)) && ((n1 % n3 == 0) || (n3 % n1 == 0));

    // if (isValidNumber) {
    //     printf("Valid number\n");
    // } else {
    //     printf("Invalid number\n");
    // };

    // =============================================================================

    // int currYear = 2022, currMonth = 11, currDay = 4;
    // int birthYear, birthMonth, birthDay;

    // printf("Enter birth day: \n");
    // scanf("%d", &birthDay);

    // printf("Enter birth month: \n");
    // scanf("%d", &birthMonth);

    // printf("Enter birth year: \n");
    // scanf("%d", &birthYear);

    // int years = currYear - birthYear;
    // int months = currMonth - birthMonth;
    // int days = currDay - birthDay;

    // if (months < 0) months *= -1;
    // if (days < 0) days *= -1;

    // printf("Your age is: %d years, %d month, and %d day\n", years, months, days);

    // =============================================================================

    // int x, y;

    // printf("Enter a coordinate e.g (x, y):\n");
    // scanf("%d%d", &x, &y);

    // if (x > 0 && y > 0) {
    //     printf("(%d, %d) is in Quadrant 1(+, +)", x, y);
    // } else if (x < 0 && y > 0) {
    //     printf("(%d, %d) is in Quadrant 2(-, +)", x, y);
    // } else if (x < 0 && y < 0) {
    //     printf("(%d, %d) is in Quadrant 3(-, -)", x, y);
    // } else if (x > 0 && y < 0) {
    //     printf("(%d, %d) is in Quadrant 4(+, -)", x, y);
    // };
    
    // =============================================================================

    // int x1, x2, y1, y2;

    // printf("Enter a coordinate e.g (x, y):\n");
    // scanf("%d%d", &x1, &y1);

    // printf("Enter a second coordinate e.g (x, y):\n");
    // scanf("%d%d", &x2, &y2);

    // double distanceBetweenPoints = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));

    // printf("Distance between points is: %lf\n", distanceBetweenPoints);

    // =============================================================================

    // int hypotenuse, height;
    // double area;

    // printf("Enter hypotenuse:\n");
    // scanf("%d", &hypotenuse);

    // printf("Enter height:\n");
    // scanf("%d", &height);

    // if (height > hypotenuse / 2) {
    //     printf("This is not right triangle\n");
    // } else {
    //     area = (hypotenuse * height) / 2;
    //     printf("Area=%lf\n", area);
    // };

    // =============================================================================

    // int day, month, year;

    // printf("Enter a day:\n");
    // scanf("%d", &day);

    // printf("Enter a month:\n");
    // scanf("%d", &month);

    // printf("Enter a year:\n");
    // scanf("%d", &year);

    // const int isYearLeap = ((year % 4 == 0) && year % 100 != 0) || (year % 400 == 0);
    // const int febDaysInMonth = isYearLeap ? 29 : 28;

    // if ((month == 3 && (day >= 21 && day <= 31)) || (month == 4 && (day >= 1 && day <= 19))) {
    //     printf("Aries\n");
    // } else if ((month == 4 && (day >= 20 && day <= 30)) || (month == 5 && (day >= 1 && day <= 20))) {
    //     printf("Taurus\n");
    // } else if ((month == 5 && (day >= 21 && day <= 31)) || (month == 6 && (day >= 1 && day <= 21))) {
    //     printf("Gemini\n");
    // } else if ((month == 6 && (day >= 22 && day <= 30)) || (month == 7 && (day >= 1 && day <= 22))) {
    //     printf("Cancer\n");
    // } else if ((month == 7 && (day >= 23 && day <= 31)) || (month == 8 && (day >= 1 && day <= 22))) {
    //     printf("Leo\n");
    // } else if ((month == 8 && (day >= 23 && day <= 31)) || (month == 9 && (day >= 1 && day <= 22))) {
    //     printf("Virgo\n");
    // } else if ((month == 9 && (day >= 23 && day <= 30)) || (month == 10 && (day >= 1 && day <= 22))) {
    //     printf("Libra\n");
    // } else if ((month == 10 && (day >= 23 && day <= 31)) || (month == 11 && (day >= 1 && day <= 21))) {
    //     printf("Scorpio\n");
    // } else if ((month == 11 && (day >= 22 && day <= 30)) || (month == 12 && (day >= 1 && day <= 21))) {
    //     printf("Sagittarius\n");
    // } else if ((month == 12 && (day >= 22 && day <= 31)) || (month == 1 && (day >= 1 && day <= 19))) {
    //     printf("Capricorn\n");
    // } else if ((month == 1 && (day >= 20 && day <= 31)) || (month == 2 && (day >= 1 && day <= 18))) {
    //     printf("Aquarius\n");
    // } else if ((month == 2 && (day >= 19 && day <= febDaysInMonth)) || (month == 3 && (day >= 1 && day <= 20))) {
    //     printf("Pisces\n");
    // };

    // =============================================================================

    return 0;
};