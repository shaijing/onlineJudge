#include <iostream>

using namespace std;

int main(void) {
    printf("\x1b[1;31m"); // 此处改变输出字体颜色(高亮)
    cout << "I'm in bold red" << endl;
    printf("\x1b[0m"); // 此处恢复系统默认输出字体颜色

    printf("\x1b[31m"); // 此处改变输出字体颜色(普通)
    cout << "I'm in red" << endl;
    printf("\x1b[0m"); // 此处恢复系统默认输出字体颜色

    printf("\x1b[2;37;41m"); // 此处改变输出字体颜色以及背景颜色
    cout << "I'm in white but with a red background" << endl;
    printf("\x1b[0m"); // 此处恢复系统默认输出字体颜色
}