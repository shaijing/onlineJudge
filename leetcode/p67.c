#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* addBinary(char* a, char* b);

int main(int argc, char** argv) {
    printf("%s\n", addBinary("11", "1110"));
    return 0;
}
char* addBinary(char* a, char* b) {
    int a_len = strlen(a);
    int b_len = strlen(b);
    int res_len = a_len > b_len ? a_len : b_len;
    char* res = (char*)calloc(res_len + 2, sizeof(char));

}