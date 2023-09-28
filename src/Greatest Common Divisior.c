// Task
// Find the greatest common divisor of two numbers

#include <stdio.h>
#include <stdbool.h>

int fing_gcd(unsigned int first, unsigned int second) {
    int division = 0;
    int rem = 0;
    
    if(second == 0) {
        return false;
    }
    else {
        do {
            rem = first % second; // остаток
            division = first / second; // целая часть
            
            first = second;
            second = rem;
        }
        while(first % second != 0);
    }
    
    return second;
    
}