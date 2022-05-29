#include <cmath>
#include <iostream>
int main() {
    double a, b, c, s, p;
    scanf("%lf %lf %lf", &a, &b, &c);
    p = (a + b + c) * 0.5;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1lf\n", s);

    return 0;
}