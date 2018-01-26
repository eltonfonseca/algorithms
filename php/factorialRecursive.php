<?php 
/**
 *  Factorial Algorithm in PHP
 * 
 * Author: Elton Fonseca
 */

function factorial($number)
{
    if($number >= 1)
        return $number * factorial($number - 1);
    else 
        return 1;
}

echo factorial(5).PHP_EOL;
?>