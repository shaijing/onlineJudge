#include <stdio.h>
#include <string.h>
int main() {
    int n, res,t;
    char vote[103] = {};
    char max[103] = {};
    scanf("%d", &n);
    t = n;
    while (n) {
        scanf("%s", vote);
        if (strlen(vote) > strlen(max)) {
            strcpy(max, vote);
            res =t- n+1;
        }
        else if (strlen(vote) == strlen(max)) {
            if (strcmp(vote, max) > 0)
                strcpy(max, vote);
        }

        n--;
    }
    printf("%d\n%s\n", res, max);
    return 0;
}