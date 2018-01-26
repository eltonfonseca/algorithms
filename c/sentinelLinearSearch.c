/**
 * Sentinel Linear Search in C
 * 
 * Author: Elton Fonseca
 **/

#include <stdio.h>

#define SIZE 10

int search(int *array, int key, int size);

int main(void)
{
    int array[SIZE] = {12,27,52,14,98,605,707,414,10,20};
    int key = 414;

    if(search(array, key, SIZE))
        printf("Find!\n");
    else 
        printf("Not Found!\n");
}

int search(int *array, int key, int size)
{
    int last_value, i = 0;

    if(--size < 1)
        return 0;
    
    last_value = array[size];    
    array[size] = key;
    
    while(array[i] != key)
        ++i;
    
    array[size] = last_value;
    return (array[i] == key) ? 1 : 0;
}
