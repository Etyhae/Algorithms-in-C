#include <stdio.h>

int max;
unsigned long long int sum;

unsigned long long int factorial(int n) {
    return (n < 2) ? 1 : n * factorial (n - 1);
}

int main() {
    scanf("%d", &max);

    sum = factorial(max);

    printf("%llu", sum);

    return 0;
}


