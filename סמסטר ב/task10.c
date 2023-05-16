#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int findChar(char *str, char ch);
void replaceBetweenContent(char *str1, char *str2);
void decodeStr(char *str);
int convertHexToDecimal(char hex_value);
void replaceLetterToHexSequence(char *str, char hex_value, int index);

int main() {

    char str[100] = "B$q0#3Me";
    decodeStr(str);

    return 0;
}

int findChar(char *str, char ch) {
    int char_index = -1, str_length = strlen(str), i;

    for (i = 0; i < str_length; i++) {
        if (str[i] == ch) char_index = i;
    }

    return char_index;
};

void replaceBetweenContent(char *str1, char *str2) {
    char temp_str = *str1;
    *str1 = *str2;
    *str2 = temp_str;
};

void decodeStr(char *str) {
    int i, j = 0, str_length = strlen(str);
    char ch, *temp_decoded = NULL;

    temp_decoded = (char *)malloc(sizeof(char) * (str_length + 1));
    assert(temp_decoded);

    strcpy(temp_decoded, str);

    for (i = 0; i < str_length; i++) {
        if (isxdigit(temp_decoded[i])) {
            ch = '1';
            
            if (isdigit(temp_decoded[i])) {
                while (ch <= temp_decoded[i]) str[j++] = ch++;
            } else {
                while (ch <= '9') str[j++] = ch++;

                if (islower(temp_decoded[i])) ch = 'a';
                else ch = 'A';

                while (ch <= temp_decoded[i]) str[j++] = ch++;
            }
        } else if (isalpha(temp_decoded[i])) {
            if (islower(temp_decoded[i])) str[j] = toupper(temp_decoded[i]);
            else str[j] = tolower(temp_decoded[i]);
            j++;
        }
    }
    
    str[j] = '\0';
    puts(str);
    free(temp_decoded);
};
