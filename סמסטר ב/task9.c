#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<ctype.h>

int reverse_str(char *str);
void count(char *str, int *lower_case, int *upper_case, int *digits, int *any_letter);
void remove_spaces(char *str);

int main () {

    char s2[] = "I    live in     israel";
    int lower_case, upper_case, digits, any_letter;

    remove_spaces(s2);
    puts(s2);

    reverse_str(s2);
    puts(s2);

    count(s2, &lower_case, &upper_case, &digits, &any_letter);
    printf("lower case: %d, upper case: %d, digits: %d, any latter: %d\n", lower_case, upper_case, digits, any_letter);

    return 0;
}

int reverse_str(char *str) {
    int len = strlen(str), i;
    char *temp_str = (char *)calloc(len + 1, sizeof(char));
    assert(temp_str);

    for (i = len; i > 0; i--) {
        temp_str[len - i] = str[i - 1];
    };

    if (strcmp(str, temp_str) == 0) {
        free(temp_str);
        return 1;
    } else {
        for (i = 0; i < len; i++) {
            str[i] = temp_str[i];
        };
    
        free(temp_str);
        return 0;
    }
}

void count(char *str, int *lower_case, int *upper_case, int *digits, int *any_letter) {
    int i, len = strlen(str);
    *lower_case = *upper_case = *digits = *any_letter = 0;

    for (i = 0; i < len; i++) {
        if (isdigit(str[i])) *digits += 1;
        else if (islower(str[i])) *lower_case += 1;
        else if (isupper(str[i])) *upper_case += 1;
        else *any_letter += 1;
    }
}

void remove_spaces(char *str) {
    int i, j, len = strlen(str);

    for (i = 1, j = 0; i <= len; i++) {
        if (str[i] != ' ' || str[i - 1] != ' ') {
            str[++j] = str[i];
        }
    }
};
