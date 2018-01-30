/**
 *  Exponentiation Algorithm in JavaScript
 * 
 * Coded by - Elton Fonseca 
 **/

function exponentiation(base, exponent)
{
    result = 1;
    while(exponent != 0)
    {
        result *= base;
        exponent -= 1;
    }
    return result;
}

console.log(exponentiation(2, 10));