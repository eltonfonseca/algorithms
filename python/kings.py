#/*************************************************************************
#*                   The Problem Solved Kings in Python                   *
#* ---------------------------------------------------------------------- *
#*                                                                        *
#* POC: $ python kings.py                                                 *
#*                                                                        *
#* Autor: Elton Fonseca                                                   *
#* http://www.fb.com/elton.junior6                                        *
#**************************************************************************/

def kings(rows, columns):
    i = 1
    king = 0
    while i <= rows:
        j = 1
        while j <= columns:
            king += 1
            j += 2
        i += 2
    print king

kings(10, 10)