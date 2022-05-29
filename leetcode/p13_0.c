#include <stdc.h>

typedef struct Map {
    char key;
    int value;
} map;

map rToI[7] =
{
           {'I',1} ,
           {'V', 5},
           {'X', 10},
           {'L', 50},
           {'C', 100},
           {'D', 500},
           {'M', 1000}
};
int getValue(char);
int romanToInt(char* s);
int main() {
    printf("%d\n", romanToInt("D"));

    return 0;
}

int getValue(char c) {
    int res;
    for (int i = 0; i < 7; i++)
        if (rToI[i].key == c) {
            res = rToI[i].value;
            break;
        }

    return res;
}


int romanToInt(char* s) {
    int res = 0;

    for (int i = 0;i < strlen(s);i++) {
        if (getValue(s[i]) < getValue(s[i + 1]))
            res -= getValue(s[i]);
        else
            res += getValue(s[i]);


    }

    return res;

}