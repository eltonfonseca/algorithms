/*
* Bubble Sort Algorithm in Language C
*
* Author: Elton Fonseca
*/

#include <stdio.h>

#define MAX_SIZE 10

int swap(int *array, int position);
void show(int *array);
void sort(int *array);

int main(void)
{
  int array[MAX_SIZE] = {5, 8, 9, 4, 7, 1, 6, 10, 3, 2};

  show(array);
  sort(array);
  show(array);
}

void show(int *array)
{
  for(int i = 0; i < MAX_SIZE; i++)
    printf("%d ", array[i]);

  printf("\n");
}

int swap(int *array, int position)
{
  int current = array[position];

  array[position] = array[position + 1];
  array[position + 1] = current;
}

void sort(int *array)
{
  for(int i = 0; i < MAX_SIZE; i++)
  {
    for(int j = 0; j < MAX_SIZE - i - 1; j++)
    {
      if(array[j] > array[j + 1])
        swap(array, j);
    }
  }
}