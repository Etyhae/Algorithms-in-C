// Task
// Determine the total number of digits in the integer (n>=0) given as input to the function. 
// For example, 9 is a single digit, 66 has 2 digits and 128685 has 6 digits. 
// Be careful to avoid overflows/underflows.

#include <stdio.h>
#include <stdint.h>

int digits(uint64_t n, int count) {
  return (n < 10)? count : digits(n / 10 , count+1);
}

int digits(uint64_t n) {
    int count = 1;
    while(n > 9) {
        n = n/10;
        count += 1;
    }
    return count; 
}

int digits(uint64_t n) {
    return (n < 9)? 1: (1 + digits_three(n / 10));
}