/*
*   Linear Search Algorithm in Language C
*
* Author: Elton Fonseca
*/

#include <stdio.h>
#include <string.h>

int search(int *array, int size, int value);

int main(void)
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    
    if(search(array, 10, 9))
        puts("Find!");
    else
        puts("Not Found!") ;
}

int search(int *array, int size, int value)
{
    int i;

    for(i = 0; i < size; i++)
        if(array[i] == value)
            return 1;
    return 0;
}