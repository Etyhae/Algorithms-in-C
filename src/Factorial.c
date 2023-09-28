// Task
// Implement factorial of a number using recursion

#include <stdio.h>

int max;
unsigned long long int sum;

unsigned long long int factorial(int n) {
    return (n < 2) ? 1 : n * factorial (n - 1);
}


