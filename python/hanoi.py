#!/usr/bin/python

#   Hanoi Tower Algorithm in Python
#
# Coded by - Elton Fonseca
#

def hanoi(pin0, pin1, pin2, disks):
    if disks == 1:
        print "Move from %d to %d" %(pin0, pin2)
    else:
        hanoi(pin0, pin1, pin2, disks - 1)
        hanoi(pin0, pin2, pin1, 1)
        hanoi(pin2, pin1, pin0, disks - 1)

hanoi(0, 2, 1, 3)