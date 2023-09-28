// Given a list of integers, determine whether the sum of its elements is odd or even.
// Answer as a string matching "odd" or "even".
// If the input array is empty consider it as: [0] (array with a zero).

#include <stddef.h>

const char *odd_or_even(const int *v, size_t sz) {
    size_t sum = 0;
    for(size_t i=0; i<sz; i++) {
        sum += v[i];
    }
    return sum % 2 ? "odd" : "even";
}