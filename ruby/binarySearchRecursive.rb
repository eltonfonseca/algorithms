# Binary Search Recursive in Ruby
#
# Author: Elton Fonseca
#

def main()
    array = [1,2,3,4,5,6,7,8,9,10];
    element = 5;

    if search(array, 0, array.length - 1, element)
        puts "Find!"
    else 
        puts "Not Found!"
    end
end

def search(array, low, high, element)
    middle = (low + high) / 2;

    if high < low 
        return false
    end
    if element < array[middle] 
        return search(array, low, middle - 1, element)
    elsif element > array[middle]
        return search(array, middle + 1, high, element)
    else 
        return true
    end
end

main()