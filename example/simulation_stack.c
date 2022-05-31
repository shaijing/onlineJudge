#include <stdio.h>

int stack[10];
int p = 0;

void push(int x);
void pop();
int top();
int main() {
    push(1);
    push(2);
    printf("%d\n", top());


    return 0;
}

void push(int x) {
    if (p <= 10)
        stack[p++] = x;
    else
        printf("Stack Overflow!\n");


}

void pop() {
    if (p == 0) 
        printf("Stack is empty!\n");
    else
        stack[p--] = 0;
}

int top() {
    if (p == 0) {
        printf("Stack is empty!\n");
        return -1;
    }
    else
        return stack[p - 1];
}