/*
*   Binary Search Recursive Algorithm in Language C
*
* Author: Elton Fonseca
* Note: The array must be ordered!
*/

#include <stdio.h>

int search(int *array, int low, int high, int element);

int main(void)
{
    int array[10] = {5, 9, 15, 20, 21, 24};
    int element = 21;

    if(search(array, 0, 6, element) != -1)
        puts("Find!");
    else
        puts("Not Found!") ;
}

int search(int *array, int low, int high, int element)
{
    int middle = low + (high - low) / 2; 

    if(high < low)
        return -1;
    if(element < array[middle])
        return search(array, low, middle - 1, element);
    else if(element > array[middle])
        return search(array, middle + 1, high, element);
    else 
        return middle;
}
