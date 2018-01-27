<?php 
/*************************************************************************
*                   The Problem Solved Kings in PHP                      *
* ---------------------------------------------------------------------- *
*                                                                        *
* POC: $ php kings.php <number of rows> <number of columns>              *
*                                                                        *
* Autor: Elton Fonseca                                                   *
* http://www.fb.com/elton.junior6                                        *
**************************************************************************/

function main($argv, $argc)
{
    if($argv == null || $argc < 3 || $argc > 3)
        print("Error!\n");
    else
        kings($argv[1], $argv[2]);
}

function kings($rows, $columns)
{
    $king = 0;
    $i = 1;
    while($i <= $rows)
    {
        $j = 1;
        while($j <= $columns)
        {
            $king++;
            $j += 2;
        }
        $i += 2;
    }
    print("Kings: " . $king . "\n");
}
main($argv, $argc);

?>