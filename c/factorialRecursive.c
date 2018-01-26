/**
 *      Factorial Recursive Algorithm in C
 *  
 * Author: Elton Fonseca
 **/

#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int number);

int main(void)
{
    printf("%lld\n", factorial(5));
}

unsigned long long factorial(int number)
{
    if(number >= 1)
        return number * factorial(number - 1);
    else 
        return 1;
}