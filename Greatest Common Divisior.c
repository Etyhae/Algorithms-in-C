#include <stdio.h>
#include <stdbool.h>

int fing_gcd(int first, int second) {
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

int main()
{
    int res = fing_gcd(106480, 2096);
    printf("%d", res);

    return 0;
}