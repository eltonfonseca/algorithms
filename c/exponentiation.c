/**
 *  Exponentiation Algorithm in C
 * 
 * Coded by - Elton Fonseca 
 **/

#include <stdio.h>

unsigned long long int exponentiation(int base, int exponent);

int main()
{
    printf("Result: %llu\n", exponentiation(2, 50));
}

unsigned long long int exponentiation(int base, int exponent)
{
    unsigned long long int result = 1;

    while(exponent != 0)
    {
        result *= base;
        --exponent;
    }
    return result;
}