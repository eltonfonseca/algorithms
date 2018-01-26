/**
 * Fibonacci Implementation in C
 * 
 * Author: Elton Fonseca
 * Copyright: All right reserved!
 * 
 **/
#include <stdio.h>

#define NUM 10

int fibonacci(int term);

int main()
{
    printf("Last Term: %d\n", fibonacci(NUM));
}

int fibonacci(int term)
{
    int i, fib0 = 1, fib1 = 1, next;

    printf("%d %d ", fib0, fib1);
    for(i = 3; i <= term; i++)
    {
        next = fib0 + fib1;
        fib0 = fib1;
        fib1 = next;
        printf("%d ", fib1);
    }
    printf("\n");
    return fib1;
}