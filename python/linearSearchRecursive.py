#   Linear Search Recursive Algorithm in Python
#
#   Author: Elton Fonseca

def main():

    array = [1,2,3,4,5,6,7,8,9,10]

    if search(array, len(array) - 1, 6):
        print "Find!"
    else:
        print "Not Found!"

def search(array, element, value):
    if element < 0:
        return 0
    elif array[element] == value:
        return 1
    else:
        return search(array, element - 1, value)

main()