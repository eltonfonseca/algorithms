# Factorial Algorithm in Python
#
# Author: Elton Fonseca
#

def factorial(number):
    fat = 1

    for i in range(1, number + 1):
        fat *= i
    print fat

factorial(5)