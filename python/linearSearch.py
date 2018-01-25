#   Linear Search Algorithm in Python
#
#   Author: Elton Fonseca

def main():
    if search([1,2,3,4,5,6,7,8,9,10], 7):
        print "Find!"
    else:
        print "Not Found!"

def search(array, value):
    for i in range(len(array)):
        if array[i] == value:
            return 1
    return 0

main()