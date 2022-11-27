#include <stdio.h>
#include <math.h>

int main()
{
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

    void Ex1()
    {
        int id_number;

        printf("Enter an id:\n");
        scanf_s("%d", &id_number);
        printf("Is valid id?: %d\n", checkID(id_number));
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
        scanf_s("%d", &prev_digit);

        if (number == 1)
            return prev_digit;

        printf("Enter a number:\n");
        scanf_s("%d", &digit);

        if (number == 2)
            return digit + prev_digit;

        prev_difference_between_numbers = digit - prev_digit;
        sum = prev_digit + digit;
        prev_digit = digit;

        for (i = 2; i < number; i++)
        {
            printf("Enter a number:\n");
            scanf_s("%d", &digit);

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

    void Ex2()
    {
        int number_of_list_input;

        printf("Enter a number of list input:\n");
        scanf_s("%d", &number_of_list_input);
        printf("The sum of longest list is: %d\n", sumLongestArithmeticList(number_of_list_input));
    };

    int numberLength(int number)
    {
        return (int)log10(number) + 1;
    };

    int rotateNumber(int spins, int number)
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

    void Ex3()
    {
        int number_to_rotate, number_of_spins;

        printf("Enter a number to rotate:\n");
        scanf_s("%d", &number_to_rotate);
        printf("Enter a spins number:\n");
        scanf_s("%d", &number_of_spins);
        printf("Rotated number is: %d\n", rotateNumber(number_of_spins, number_to_rotate));
    };

    int select = 0, i, all_Ex_in_loop = 0;
    printf("Run menu once or cyclically?\n(Once - enter 0, cyclically - enter other number) ");
    if (scanf_s("%d", &all_Ex_in_loop) == 1)
    {
        do
        {
            for (i = 1; i <= 3; i++)
            {
                printf("Ex%d--->%d\n", i, i);
            };

            printf("EXIT-->0\n");

            do
            {
                select = 0;
                printf("please select 0-%d : ", 3);
                scanf_s("%d", &select);

            } while ((select < 0) || (select > 3));

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
