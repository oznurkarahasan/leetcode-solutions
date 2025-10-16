//palindromestring en uzun

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* longestPalindromicSubstring(char* s) {
    int len = strlen(s);
    int maxLength = 1;
    int start = 0;
    int end = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            int isPalindrome = 1;
            for (int k = 0; k < (j-i+1)/2; k++) {
                if (s[i+k] != s[j-k]) {
                    isPalindrome = 0;
                    break;
                }
            }
            if (isPalindrome && (j-i+1) > maxLength) {
                maxLength = j-i+1;
                start = i;
                end = j;
            }
        }
    }
    char* result = (char*) malloc((maxLength+1) * sizeof(char));
    strncpy(result, s+start, maxLength);
    result[maxLength] = '\0';
    return result;
}

int main() {
    char* s = "babad";
    char* result = longestPalindromicSubstring(s);
    printf("%s\n", result);
    free(result);
    return 0;
}
