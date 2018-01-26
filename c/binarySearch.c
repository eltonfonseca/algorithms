/*
*   Binary Search Algorithm in Language C
*
* Author: Elton Fonseca
*/

#include <stdio.h>

int search(int *array, int low, int high, int element);

int main(void)
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    
    if(search(array, 0, 10, 7))
        puts("Find!");
    else
        puts("Not Found!") ;
}

int search(int *array, int low, int high, int element)
{
    while(low <= high)
    {
        int middle = low + (high - low) / 2;

        if(array[middle] == element)
            return 1;
        else if(array[middle] < element)
            low = middle + 1;
        else
            high = middle - 1;
    }
    return 0;
}
