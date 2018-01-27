/**
 *  Factorial Algorithm in JavaScript
 * 
 * Author: Elton Fonseca
 */

function factorial(number)
{
    fat = 1;
    
    for(i = 1; i <= number; i++)
        fat *= i;
    console.log(fat);
}
factorial(5);