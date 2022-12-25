#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

int main() {
    // char *concatenatingStr(char *str) {
    //     int lenOfStr = strlen(str) * 2, i;
    //     char *newStr = (char *)calloc(lenOfStr, sizeof(char));
    //     assert(newStr);

    //     for (i = 0; i < lenOfStr; i++) {
    //         newStr[i] = str[i % (lenOfStr / 2)];
    //     };

    //     return newStr;
    // };

    // ============================================================================= class 9.1

    // char getMostRepeatedChar(char *str, int *maxRepeated) {
    //     int i, j, lenOfStr = strlen(str);
    //     int currentIndexOfLetter, maxLetter = 0;
    //     int tempList[26] = {0};

    //     for (i = 0; i < lenOfStr; i++) {
    //         if (str[i] >= 'a' && str[i] <= 'z') {
    //             currentIndexOfLetter = str[i] - 'a';
    //             tempList[currentIndexOfLetter]++;
    //         };
    //     };

    //     *maxRepeated = tempList[0];

    //     for (j = 1; j < 26; j++) {
    //         if (tempList[j] > *maxRepeated) {
    //             *maxRepeated = tempList[j];
    //             maxLetter = j;
    //         };
    //     };

    //     return maxLetter + 'a';
    // };

    // ============================================================================= class 9.2

    // int isValidString(char *str) {
    //     int i, strLen = strlen(str);

    //     for(i = 1; i < strLen; i++) {
    //         if (str[0] >= 'a' && str[0] <= 'z') {
    //             if (str[i] >= 'A' && str[i] <= 'Z') return 0;
    //         } else {
    //             if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i + 1] >= 'a' && str[i + 1] <= 'a')) return 0;
    //             if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] >= 'A' && str[i + 1] <= 'Z')) return 0;
    //         }
    //     };

    //     return 1;
    // };

    // ============================================================================= class 9.3

    // char *removeSpaces(char *str) {
    //     int strLen = strlen(str), countSpaces = 0, i;
    //     char *newStr = (char *)calloc(strLen + 1, sizeof(char));
    //     assert(newStr);

    //     for (i = 0; i < strLen; i++) {
    //         if (str[i] == ' ') {
    //             countSpaces++;
    //         } else {
    //            newStr[i - countSpaces] = str[i]; 
    //         };
    //     };

    //     newStr = (char *)realloc(newStr, sizeof(char) * (strLen - countSpaces));
    //     return newStr;
    // };

    // ============================================================================= class 9.4

    // int isPalindrome(char *str) {
    //     int i, strLen = strlen(str);
    //     int halfWay = strLen / 2;

    //     for (i = 0; i < halfWay; i++) {
    //         if (str[i] != str[strLen - 1 - i]) return 0;
    //     };

    //     return 1;
    // };

    // ============================================================================= class 9.5

    return 0;
};
