/**
 *  Exponentiation Recursive Algorithm in JavaScript
 * 
 * Coded by - Elton Fonseca 
 **/

function exponentiation(base, exponent)
{
    if(exponent == 0)
        return 1;
    else 
        return base * exponentiation(base, exponent - 1);
}

console.log(exponentiation(2, 10));