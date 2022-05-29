#include <stdio.h> 
#include <errno.h> 
#include <string.h>
int main() {
    char* buffer;
    buffer = strerror(errno);
    printf("Error: %s", buffer);
    return 0;
}