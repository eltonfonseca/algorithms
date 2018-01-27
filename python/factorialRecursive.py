# Factorial Algorithm in Python
#
# Author: Elton Fonseca
#

def factorial(number):
    if number == 0:
        return 1
    else:
        return number * factorial(number - 1)

print factorial(5)