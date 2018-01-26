# Binary Search Algorithm in Python
#
# Author: Elton Fonseca
#

def main():
    array = [1,2,3,4,5,6,7,8,9,10]
    element = 7

    if search(array, 0, len(array) - 1, element):
        print "Find!"
    else:
        print "Not Found!"

def search(array, low, high, element):
    while low <= high:
        middle = low + (high - low) / 2
        if array[middle] == element:
            return 1
        elif array[middle] < element:
            low = middle + 1
        else:
            high = middle - 1
    return 0

main()