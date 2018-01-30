#!/user/bin/python

#   Exponentiation Algorithm in Python
#
# Coded by - Elton Fonseca
# 

def exponentiation(base, exponent):
    if exponent == 0:
        return 1
    else: 
        return base * exponentiation(base, exponent - 1)

print exponentiation(2, 10)
