#!/user/bin/python

#   Exponentiation Algorithm in Python
#
# Coded by - Elton Fonseca
# 

def exponentiation(base, exponent):
    result = 1
    while exponent != 0:
        result *= base
        exponent -= 1
    return result

print exponentiation(2, 10)
