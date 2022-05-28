#include <stdio.h>
#include <string.h>
int strStr(char* haystack, char* needle);
int main(int argc, char** argv) {

    printf("%d\n", strStr("a", "a"));
}
int strStr(char* haystack, char* needle) {
    if (!haystack || !needle)
        return -1;
    if (!*needle)
        return 0;
    int res = -1;
    int haystack_len = strlen(haystack);
    int needle_len = strlen(needle);

    for (int i = 0;i < haystack_len;i++) {
        if (haystack[i] == needle[0] && (haystack_len - i) >= needle_len) {
            for (int j = 0;j < needle_len;j++) {
                if (needle[j] != haystack[i + j]) {
                    res = -1;
                    break;
                }
                else
                    res = i;

            }


        }
        if (res != -1)
            break;


    }
    return res;
}