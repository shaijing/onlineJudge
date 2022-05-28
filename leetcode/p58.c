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
    int isInWord = 0, begin, end;
    int posi;

    int len = strlen(s);
    if (len == 1)
        return 1;
    for (int i = len - 1; i >= 0; i--) {
        if (isInWord == 0 && isalpha(s[i])) {
            isInWord = 1;
            begin = i;
        }
        if (isInWord == 1 && s[i] == ' ') {
            end = i;
            isInWord = 0;
            break;
        }

    }
    return begin - end;

}