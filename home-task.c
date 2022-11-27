#define N 3

#include <stdio.h>
#include <math.h>

void Ex1();
void Ex2();
void Ex3();

int sumDigits(int);
int checkID(int);
int sumLongestArithmeticList(int);
int numberLength(int);
int rotateNumber(int, int);

int main()
{
    int select = 0, i, all_Ex_in_loop = 0;
    printf("Run menu once or cyclically?\n(Once - enter 0, cyclically - enter other number) ");
    if (scanf("%d", &all_Ex_in_loop) == 1)
    {
        do
        {
            for (i = 1; i <= N; i++)
            {
                printf("Ex%d--->%d\n", i, i);
            };

            printf("EXIT-->0\n");

            do
            {
                select = 0;
                printf("please select 0-%d : ", N);
                scanf("%d", &select);

            } while ((select < 0) || (select > N));

            switch (select)
            {
            case 1:
                Ex1();
                break;
            case 2:
                Ex2();
                break;
            case 3:
                Ex3();
                break;
            };

        } while (all_Ex_in_loop && select);
    };

    return 0;
};

void Ex1()
{
    int id = 0, answer = 0;
    printf("please enter your id: ");
    scanf("%d", &id);
    answer = checkID(id);
    if (answer)
    {
        printf("Your id is a correct id.\n");
    }
    else
    {
        printf("Your id is incorrent.\n");
    }
}

void Ex2()
{
    int size = 0, answer = 0;
    printf("please enter the arithmetic list size: ");
    scanf("%d", &size);
    answer = sumLongestArithmeticList(size);
    printf("The sum of the longest sequence arithmetic list is: %d.\n", answer);
}

void Ex3()
{
    int number = 0, spins = 0, answer = 0;
    printf("please enter the number and the amount of spins: ");
    scanf("%d%d", &number, &spins);
    answer = rotateNumber(number, spins);
    printf("The number %d after %d spins is: %d.\n", number, spins, answer);
}

int sumDigits(int number)
{
    int sum = 0;

    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    };

    return sum;
};

int checkID(int id)
{
    int sum = 0, sum_of_digit, digit_index = 1, number_to_multiple = 1;

    while (id > 0)
    {
        number_to_multiple = digit_index % 2 == 0 ? 2 : 1;
        sum_of_digit = (id % 10) * number_to_multiple;

        if (sum_of_digit > 9)
        {
            sum_of_digit = sumDigits(sum_of_digit);
        };

        digit_index++;
        sum += sum_of_digit;
        id /= 10;
    };

    return sum % 10 == 0;
};

int sumLongestArithmeticList(int number)
{
    int i;
    int digit;
    int prev_digit;
    int difference_between_numbers;
    int prev_difference_between_numbers;

    int longest_sequence = 2;
    int prev_longest_sequence = 2;
    int sum = 0;
    int max_sum = 0;

    printf("Enter a number:\n");
    scanf("%d", &prev_digit);

    if (number == 1)
        return prev_digit;

    printf("Enter a number:\n");
    scanf("%d", &digit);

    if (number == 2)
        return digit + prev_digit;

    prev_difference_between_numbers = digit - prev_digit;
    sum = prev_digit + digit;
    prev_digit = digit;

    for (i = 2; i < number; i++)
    {
        printf("Enter a number:\n");
        scanf("%d", &digit);

        difference_between_numbers = digit - prev_digit;

        if (difference_between_numbers == prev_difference_between_numbers)
        {
            sum += digit;
            longest_sequence++;

            if (longest_sequence > prev_longest_sequence)
            {
                max_sum = sum;
                prev_longest_sequence = longest_sequence;
            }
            else if (longest_sequence == prev_longest_sequence && sum > max_sum)
            {
                max_sum = sum;
            };
        }
        else
        {
            sum = prev_digit + digit;
            longest_sequence = 2;
        };

        prev_difference_between_numbers = difference_between_numbers;
        prev_digit = digit;
    };

    return max_sum;
};

int numberLength(int number)
{
    return (int)log10(number) + 1;
};

int rotateNumber(int number, int spins)
{
    int i;
    int first_digit;
    int log_number = numberLength(number) - 1;
    int pow_number = pow(10, log_number);

    for (i = 0; i < (spins % numberLength(number)); i++)
    {
        first_digit = number % 10;
        number /= 10;
        number += first_digit * pow_number;
    };

    return number;
};