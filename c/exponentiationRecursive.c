/**
 *  Exponentiation Recursive Algorithm in C
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
    if(exponent == 0)
        return 1;
    else
        return base * exponentiation(base, exponent - 1);
}