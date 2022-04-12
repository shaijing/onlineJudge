#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int mycmp(const void*, const void*);

int main() {
    char ch[12];
    int num[6] = {0}, n = 0;
    int in = 0,flag;
    char num_str[20][3][10] = {{"one", "another", "a"},
                               {"two", "both", "second"},
                               {"three", "third"},
                               {"four"},
                               {"five"},
                               {"six"},
                               {"seven"},
                               {"eight"},
                               {"nine"},
                               {"ten"},
                               {"eleven"},
                               {"twelve"},
                               {"thirteen"},
                               {"fourteen"},
                               {"fifteen"},
                               {"sixteen"},
                               {"seventeen"},
                               {"eighteen"},
                               {"nineteen"},
                               {"twenty"}};

    for (int i = 0; i < 6; i++) {
        scanf("%s", ch);
        if (strcmp(ch, "zero") == 0) {
            num[i] = 0;
            n++;
        }

        for (int j = 0; j < 20; j++) {
            if (j < 3) {
                for (int k = 0; k < 3; k++) {
                    if (strcmp(ch, num_str[j][k]) == 0) {
                        num[i] = (j + 1) * (j + 1) % 100;
                        n++;
                        break;
                    }
                }
            } else if (strcmp(ch, num_str[j][0]) == 0) {
                num[i] = (j + 1) * (j + 1) % 100;
                n++;
                break;
            }
        }
    }

    if (n == 0) {
        puts("0");
        return 0;
    }
    qsort(num, 6, sizeof(int), mycmp);
    for (int i = 0; i < 6; i++) {
        if (in == 0 && num[i]) {
            in = 1;
            flag = i;
        }

        if (in && i == flag) {
            printf("%d", num[i]);

        } else if (in) {
            printf("%02d", num[i]);
        }
    }
    return 0;
}

int mycmp(const void* p1, const void* p2) {
    return *(int*)p1 - *(int*)p2;
}
