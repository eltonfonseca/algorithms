/**
 * Fibonacci Algorithm in JavaScript
 * 
 * Author: Elton Fonseca
 */

 function fibonacci(term)
 {
     fib0 = fib1 = 1;

     console.log(fib0);
     console.log(fib1);
     
     for(i = 3; i <= term; i++)
     {
        aux = fib0 + fib1;
        fib0 = fib1;
        fib1 = aux;

        console.log(fib1);
     }
 }
 fibonacci(10);