#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int isIPV4(char* IP);
int isIPV6(char* IP);
char* validIPAddress(char* queryIP);
inline static bool isHec(char a) //判断某个字符是否是16进制字符
{
    if ('0' <= a && a <= '9') return true;
    else if ('a' <= a && a <= 'f') return true;
    else if ('A' <= a && a <= 'F') return true;
    return false;
}

int main() {
    char ip[60] = "1.1.0.";
    char* str = validIPAddress(ip);
    puts(str);
    return 0;
}

char* validIPAddress(char* queryIP) {

    if (strchr(queryIP, '.')) {
        if (isIPV4(queryIP))
            return "IPv4";
        else
            return "Neither";
    }
    else if (strchr(queryIP, ':')) {
        if (isIPV6(queryIP))
            return "IPv6";
        else
            return "Neither";
    }
    else
        return "Neither";



}

int isIPV4(char* IP) {
    char* ptr[4], *t;
    const char delim[2] = ".";
    int n = 0, res = 1, len, d = 0;
    for (int i = 0; i < strlen(IP); i++) {
        if (IP[i] == '.')
            d++;

    }
    if (d != 3)
        return 0;

    t = strtok(IP, delim);
    if (t == NULL)
        return 0;
    ptr[n++] = t;
    while (n < 4) {
        t = strtok(NULL, delim);
        if (t == NULL) {
            res = 0;
            break;
        }
        ptr[n++] = t;
    }
    // for (int i = 0; i < 4; i++) {
    //     printf("%s\n", *(ptr + i));
    // }
    for (int i = 0; i < 4; i++) {
        len = strlen(ptr[i]);
        if (strcmp(ptr[i], "0") < 0 || strcmp(ptr[i], "255") > 0) {
            res = 0;
            break;
        }

        if (len > 1 && *ptr[i] == '0' || len == 0) {
            res = 0;
            break;
        }

    }
    return res;


}

int isIPV6(char* IP) {
    char* ptr[8],*t;
    const char delim[2] = ":";
    int d = 0, n = 0, res = 1, len;

    for (int i = 0; i < strlen(IP); i++) {
        if (IP[i] == ':') {
            d++;
            continue;
        }
        if (!isHec(IP[i])) {
            res = 0;
            break;
        }

    }
    if (d != 7)
        return 0;
    t = strtok(IP, delim);
    if (t == NULL)
        return 0;
    ptr[n++] = t;
    while (n < 8) {
        t = strtok(NULL, delim);
        if (t == NULL) {
            res = 0;
            break;
        }
        ptr[n++] = t;
    }
    // for (int i = 0; i < 8; i++) {
    //     printf("%s\n", *(ptr + i));
    // }
    for (int i = 0; i < 4; i++) {
        len = strlen(ptr[i]);
        if (len > 4 || len == 0) {
            res = 0;
            break;
        }
    }
    return res;
}
