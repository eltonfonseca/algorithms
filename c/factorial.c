/**
 *      Factorial Algorithm in C
 *  
 * Author: Elton Fonseca
 **/

#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int number);

int main(void)
{
    printf("%lld\n", factorial(55));
}

unsigned long long factorial(int number)
{
    int i;
    unsigned long long fat = 1;
    if(number == 0)
        return 1;
    else if(number < 0)
    {
        printf("Not exists factorial by zero!\n");
        exit(0);
    }
        
    else
        for(i = 1; i <= number; i++)
            fat *= i;
    return fat;
}