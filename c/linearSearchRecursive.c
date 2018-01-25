/*
*   Linear Search Recursive Algorithm in Language C
*
* Author: Elton Fonseca
*/

#include <stdio.h>

#define SIZE 10

int search(int *array, int element, int value);

int main(void)
{
    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    
    if(search(array, 10, 2) == 1)
        puts("Find!");
    else
        puts("Not Found!") ;
}

int search(int *array, int element, int value)
{
    if(element < 0)
        return 0;
    else if(array[element] == value)
        return 1;
    else
        return search(array, element - 1, value);
}
