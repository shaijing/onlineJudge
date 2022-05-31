#include <stdc.h>

#define size 5

int a[size * size], n = 4 * 4, ans = 0;
int b1[size][5], b2[size][5], b3[size][5];//分别记录横行,竖行,四小块
void dfs(int x);
int main() {
    dfs(1);
    printf("%d ", ans);

    return 0;
}

void dfs(int x) {//第x个空填什么
    if (x > n) {
        ans++;//增加结果数量
        for (int i = 1; i <= n; i++) {
            printf("%d ", a[i]);
            if (i % 4 == 0)
                puts(" ");
        }

        return;//终止函数
    }

    int row = (x - 1) / 4 + 1; //横行编号
    int col = (x - 1) % 4 + 1; //竖行编号
    int block = (row - 1) / 2 * 2 + (col - 1) / 2 + 1;//小块编号
    for (int i = 1;i <= 4;i++) {
        if (b1[row][i] == 0 && b2[col][i] == 0 && b3[block][i] == 0) {
            a[x] = i; //记录放置位置

            //占位
            b1[row][i] = 1;
            b2[col][i] = 1;
            b3[block][i] = 1;

            dfs(x + 1);//下一层递归

            //取消占位
            b1[row][i] = 0;
            b2[col][i] = 0;
            b3[block][i] = 0;
        }
    }



}