/**
 *      Hanoi Tower Algorithm in C
 * 
 * Coded by - Elton Fonseca
 **/

#include <stdio.h>

void hanoi(int pin0, int pin1, int pin2, int disks);

int main()
{
    hanoi(0, 2, 1, 3);
}
void hanoi(int pin0, int pin1, int pin2, int disks)
{
    if(disks == 1)
        printf("Move from %d to %d\n", pin1, pin2);
    else
    {
        hanoi(pin0, pin1, pin2, disks - 1);
        hanoi(pin0, pin2, pin1, 1);
        hanoi(pin1, pin2, pin0, disks - 1);
    }
}
