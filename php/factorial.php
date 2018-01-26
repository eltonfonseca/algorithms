<?php 
/**
 *  Factorial Algorithm in PHP
 * 
 * Author: Elton Fonseca
 */

function factorial($number)
{
    $factorial = 1;

    if($number == 0)
        return 1;
    else if($number < 0)
    {
        echo "Not Factorial by zero!";
    }
    for($i = 1; $i <= $number; $i++)
        $factorial *= $i;
    return $factorial;
}

echo factorial(5).PHP_EOL;
?>