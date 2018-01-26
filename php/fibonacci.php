<?php

    /**
     *  Fibonacci in PHP
     * 
     * Author: Elton Fonseca
     */

    function fibonacci($term)
    {
        $fib0 = 1; $fib1 = 1;
        print($fib0 . " " . $fib1 . " ");
        
        for($i = 3; $i <= $term; $i++)
        {
            $next = $fib0 + $fib1;
            $fib0 = $fib1;
            $fib1 = $next;

            print($fib1 . " ");
        }
        print("\n");
    }
    fibonacci(10);
?>
