/**
 * Fibonacci Recursive Implementation in C
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
    if(term == 1 || term == 2)
        return 1;   
    else
        return fibonacci(term - 1) + fibonacci(term - 2);        
}