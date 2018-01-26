#   Fibonacci Algorithm in Python
#
# Author: Elton Fonseca
#

def fibonacci(term):
    fib0 = fib1 = 1
    print fib0
    print fib1
    for i in range(3, term + 1):
        aux = fib0 + fib1
        fib0 = fib1
        fib1 = aux
        print fib1

fibonacci(10)