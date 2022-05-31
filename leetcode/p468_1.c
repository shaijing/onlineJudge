#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int isIPV4(char* IP);
int isIPV6(char* IP);
char* validIPAddress(char* queryIP);
//TODO
inline static bool isHec(char a) //判断某个字符是否是16进制字符
{
    if ('0' <= a && a <= '9') return true;
    else if ('a' <= a && a <= 'f') return true;
    else if ('A' <= a && a <= 'F') return true;
    return false;
}

int main() {
    char ip[60] = "2001:0db8:85a3:00000:0:8A2E:0370:7334";
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
    char ip_ptr[4][5];
    int ip_num[4];
    int res = 1, in_d = 0;

    //检验'.'数量
    for (int i = 0; i < strlen(IP); i++) {
        if (IP[i] == '.') {
            in_d++;
            continue;
        }
    }
    if (in_d != 3)
        return 0;
    //检验'.'数量结束

    //分割字符串
    int r = sscanf(IP, "%[0-9].%[0-9].%[0-9].%[0-9]", ip_ptr[0], ip_ptr[1], ip_ptr[2], ip_ptr[3]);
    // printf("r:%d\n ", r);
    // for (int i = 0; i < 4; i++) {
    //     printf("%s ", ip_ptr[i]);
    // }
    if (r != 4)
        return 0;

    for (int i = 0;i < 4;i++) {
        int len = strlen(ip_ptr[i]);
        if (strcmp(ip_ptr[i], "0") < 0 || strcmp(ip_ptr[i], "255") > 0) {
            res = 0;
            break;
        }

        if (len > 1 && ip_ptr[i][0] == '0' || len == 0) {
            res = 0;
            break;
        }

    }

    return res;


}

int isIPV6(char* IP) {
    char ip_ptr[8][10];
    int res = 1, in_d = 0;

    //检验'.'数量
    for (int i = 0; i < strlen(IP); i++) {
        if (IP[i] == ':') {
            in_d++;
            continue;
        }
        if (!isHec(IP[i])) {
            res = 0;
            break;
        }

    }
    if (in_d != 7)
        return 0;
    //检验'.'数量结束

    //分割字符串
    int r = sscanf(IP, "%[a-f-A-F-0-9]:%[a-f-A-F-0-9]:%[a-f-A-F-0-9]:%[a-f-A-F-0-9]:%[a-f-A-F-0-9]:%[a-f-A-F-0-9]:%[a-f-A-F-0-9]:%[a-f-A-F-0-9]",
        ip_ptr[0], ip_ptr[1], ip_ptr[2], ip_ptr[3], ip_ptr[4], ip_ptr[5], ip_ptr[6], ip_ptr[7]);
    // printf("r:%d\n ", r);
    // for (int i = 0; i < 8; i++) {
    //     printf("%s ", ip_ptr[i]);
    // }
    if (r != 8)
        return 0;

    for (int i = 0;i < 8;i++) {
        int len = strlen(ip_ptr[i]);

        if (len > 4) {
            res = 0;
            break;
        }

    }

    return res;


}
