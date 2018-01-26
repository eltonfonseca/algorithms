<?php

    /**
     *  Fibonacci Recursive in PHP
     * 
     * Author: Elton Fonseca
     */

    function fibonacci($term)
    {
        if($term == 1 || $term == 2)
            return 1;
        else
            return fibonacci($term - 1) + fibonacci($term - 2);
    }
    print(fibonacci(10) . "\n");
?>
