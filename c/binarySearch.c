/*
*   Binary Search Algorithm in Language C
*
* Author: Elton Fonseca
*/

#include <stdio.h>

int search(int *array, int leftHalf, int rightHalf, int value);

int main(void)
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    
    if(search(array, 0, 9, 7))
        puts("Find!");
    else
        puts("Not Found!") ;
}

int search(int *array, int leftHalf, int rightHalf, int value)
{
    while(leftHalf <= rightHalf)
    {
        int mid = leftHalf + (rightHalf - leftHalf) / 2;

        if(array[mid] == value)
            return 1;
        else if(array[mid] < value)
            leftHalf = mid + 1;
        else
            rightHalf = mid - 1;
    }
    return 0;
}
