#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

typedef char *veryLong;

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

    // int isS1IncludeInS2Letter(char *str1, char *str2) {
    //     int len1 = strlen(str1);
    //     int len2 = strlen(str2);
    //     int i, j, currentIndex;
    //     int tempList[26] = {0};

    //     for (i = 0; i < len2; i++) {
    //         if (str2[i] >= 'a' && str2[i] <= 'z') {
    //             currentIndex = str2[i] - 'a';
    //             tempList[currentIndex]++;
    //         };
    //     };

    //     for (j = 0; j < len1; j++) {
    //         if (str1[j] >= 'a' && str1[j] <= 'z') {
    //             currentIndex = str1[j] - 'a';
    //             tempList[currentIndex]--;
    //             if (tempList[currentIndex] < 0) return 0;
    //         };
    //     };

    //     return 1;
    // };

    // ============================================================================= laboratory 9.1

    // int isSameExactLetter(char *str1, char *str2) {
    //     int len1 = strlen(str1);
    //     int len2 = strlen(str2);
    //     int i, j, k, currentIndex;
    //     int tempList[26] = {0};

    //     for (i = 0; i < len2; i++) {
    //         if (str2[i] >= 'a' && str2[i] <= 'z') {
    //             currentIndex = str2[i] - 'a';
    //             tempList[currentIndex]++;
    //         };
    //     };

    //     for (j = 0; j < len1; j++) {
    //         if (str1[j] >= 'a' && str1[j] <= 'z') {
    //             currentIndex = str1[j] - 'a';
    //             tempList[currentIndex]--;
    //         };
    //     };

    //     for (k = 0; k < 26; k++) {
    //         if (tempList[k] != 0) return 0;
    //     };

    //     return 1;
    // };

    // ============================================================================= laboratory 9.2

    // void removeDuplicate(char *str) {
    //     int i, j, strLen = strlen(str);

    //     for (i = 1, j = 1; i < strLen; i++) {
    //         if (str[i] != str[j - 1]) {
    //             str[j] = str[i];
    //             j++;
    //         };
    //     };

    //     str[j] = '\0';
    // };

    // ============================================================================= laboratory 9.3

    // void removeDuplicateAndAddNumber(char *str) {
    //     int i, j, strLen = strlen(str), counter = 1;

    //     for (i = 0, j = 0; i < strLen; i++) {
    //         if (str[i] != str[i + 1]) {
    //             str[j] = str[i];
    //             j++;

    //             if (counter > 1) {
    //                 str[j] = counter + '0';
    //                 j++;
    //             };

    //             counter = 1;
    //         } else {
    //             counter++;
    //         };
    //     };

    //     str[j] = '\0';
    // };

    // ============================================================================= laboratory 9.4

    // int isPalindromePermutation(char *str) {
    //     int i, strLen = strlen(str), currentIndex, numOfOdds = 0;
    //     int tempList[26] = {0};

    //     for (i = 0; i < strLen; i++) {
    //         currentIndex = str[i] - 'a';
    //         tempList[currentIndex]++;
    //     };

    //     for (i = 0; i < 26; i++) {
    //         if ((tempList[i] % 2) == 1) {
    //             numOfOdds++;

    //             if (numOfOdds > 1) return 0;
    //         };
    //     };

    //     return 1;
    // };

    // ============================================================================= laboratory 9.5

    // char *removesCharForPalindromePermutation(char *str, int *size) {
    //     int i, strLen = strlen(str), currentIndex, numOfOdds = 0;
    //     char *strToBeRemoved = (char *)calloc(strLen, sizeof(char));
    //     assert(strToBeRemoved);
    //     int tempList[26] = {0};
    //     *size = 0;

    //     for (i = 0; i < strLen; i++) {
    //         currentIndex = str[i] - 'a';
    //         tempList[currentIndex]++;
    //     };

    //     for (i = 0; i < 26; i++) {
    //         if ((tempList[i] % 2) == 1) {
    //             numOfOdds++;

    //             if (numOfOdds > 1) {
    //                 strToBeRemoved[*size] = i + 'a';
    //                 numOfOdds = 1;
    //                 *size += 1;
    //             };
    //         };
    //     };

    //     strToBeRemoved = (char *)realloc(strToBeRemoved, sizeof(char) * (*size + 1));
    //     assert(strToBeRemoved);

    //     return strToBeRemoved;
    // };

    // ============================================================================= laboratory 9.6

    // int isEqualStrings(char *str1, char *str2) {
    //     int strLen1 = strlen(str1);
    //     int strLen2 = strlen(str2);
    //     int i, d1, d2;

    //     if (strLen1 != strLen2) return 0;

    //     for (i = 0; i < strLen1; i++) {
    //         if (str1[i] >= 'A' && str1[i] <= 'Z') {
    //             d1 = str1[i] - 'A';
    //         } else {
    //             d1 = str1[i] - 'a';
    //         };

    //         if (str2[i] >= 'A' && str2[i] <= 'Z') {
    //             d2 = str2[i] - 'A';
    //         } else {
    //             d2 = str2[i] - 'a';
    //         };

    //         if (d1 != d2) return 0;
    //     };

    //     return 1;
    // };

    // ============================================================================= laboratory 9.7

    // char *slice(char *str, int index, int length) {
    //     int strLen = strlen(str), i;
    //     char *newStr = NULL;

    //     if ((strLen - length < length) || (index > strLen - 1)) return NULL;

    //     newStr = (char *)calloc(length + 1, sizeof(char));
    //     assert(newStr);

    //     for (i = 0; i < length; i++) {
    //         newStr[i] = str[index + i];
    //     };

    //     newStr[length + 1] = '\0';

    //     return newStr;
    // };

    // ============================================================================= laboratory 9.8

    // int convertStrDigitToNum(char digit) {
    //     return digit - '0';
    // };

    // veryLong covertNumberToString(int number) {
    //     int digitLength = log10(number);
    //     char *numberAsString = (char *)calloc(digitLength + 2, sizeof(char));
    //     assert(numberAsString);
        
    //     numberAsString[digitLength + 1] = '\0';
        
    //     while (number > 0) {
    //         numberAsString[digitLength] = (number % 10) + '0';
    //         number /= 10;
    //         digitLength--;
    //     };

    //     return numberAsString;
    // };

    // veryLong addVeryLong(veryLong vl1, veryLong vl2) {
    //     int i, strLen1 = strlen(vl1), strLen2 = strlen(vl2);
    //     int digitLen1 = pow(10, strLen1 - 1), digitLen2 = pow(10, strLen2 - 1);
    //     int num1 = 0, num2 = 0;

    //     for (i = 0; i < strLen1; i++) {
    //         num1 += convertStrDigitToNum(vl1[i]) * digitLen1;
    //         digitLen1 /= 10;
    //     };

    //     for (i = 0; i < strLen2; i++) {
    //         num2 += convertStrDigitToNum(vl2[i]) * digitLen2;
    //         digitLen2 /= 10;
    //     };

    //     return covertNumberToString(num1 + num2);
    // };

    // ============================================================================= laboratory 9.9

    // void removeCharsFromString(char *str, char charsToRemove[], int size) {
    //     int i, j, tempList[52] = {0}, strLen = strlen(str);

    //     for (i = 0; i < size; i++) {
    //         if (charsToRemove[i] >= 'A' && charsToRemove[i] <= 'Z') {
    //             tempList[2 * (charsToRemove[i] - 'A')] = 1;
    //         } else {
    //             tempList[2 * (charsToRemove[i] - 'a') + 1] = 1;
    //         };
    //     };

    //     i = 0;

    //     for (j = 0; j < strLen; j++) {
    //         if (str[j] >= 'A' && str[j] <= 'Z' && tempList[2 * (str[j] - 'A')] != 1) {
    //             str[i] = str[j];
    //             i++;
    //         } else if (str[j] >= 'a' && str[j] <= 'z' && tempList[2 * (str[j] - 'a') + 1] != 1) {
    //             str[i] = str[j];
    //             i++;
    //         };
    //     };

    //     str[i] = '\0';
    // };

    // ============================================================================= laboratory 9.10

    return 0;
};
