/**
 *      Hanoi Tower Algorithm in JavaScript
 * 
 * Coded by - Elton Fonseca
 **/

function hanoi(pin0, pin1, pin2, disks)
{
    if(disks == 1)
        console.log("Move from " + pin0 + " to " + pin2);
    else
    {
        hanoi(pin0, pin1, pin2, disks - 1);
        hanoi(pin0, pin2, pin1, 1);
        hanoi(pin2, pin1, pin0, disks - 1);
    }
}

hanoi(0, 2, 1, 3);