#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int lengthOfLastWord(char* s);

int main() {
    int a = lengthOfLastWord("");
    printf("%d\n", a);

    return 0;
}
int lengthOfLastWord(char* s) {
    int len = strlen(s) - 1;
    int wordLength = 0;


    while (s[len] == ' ' && len >= 0) {
        len--;
    }

    while (s[len] != ' ') {
        wordLength++;
        len--;

        if (len < 0) {
            break;
        }
    }

    return wordLength;
}