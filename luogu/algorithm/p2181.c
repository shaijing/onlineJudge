#include<stdio.h>
int main(){
    unsigned long n;
    scanf("%lu", &n);
    printf("%lu\n",n*(n-1)/2*(n-2)/3*(n-3)/4);
    return 0;
}