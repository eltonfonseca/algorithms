#   Fibonacci Recursive Algorithm in Python
#
# Author: Elton Fonseca
#

def fibonacci(term):
    if term == 1 or term == 2:
        return 1
    else:
        return fibonacci(term - 1) + fibonacci(term - 2)

print fibonacci(10)