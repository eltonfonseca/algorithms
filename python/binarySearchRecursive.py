# Binary Search Recursive in Python
#
# Author: Elton Fonseca
# 

def main():
    array = [1,2,3,4,5,6,7,8,9,10]
    element = 9

    if search(array, 0, len(array) - 1, element):
        print "Find!"
    else:
        print "Not Found!"

def search(array, low, high, element):
    if high >= low:
        middle = low + (high - low) / 2
        if array[middle] == element:
            return 1
        elif array[middle] > element:
            return search(array, low, middle - 1, element)
        else:
            return search(array, middle + 1, high, element)
    else:
        return 0
main()
