# Binary Search Algorithm in Ruby
#
# Author: Elton Fonseca
#

def main()
    array = [1,2,3,4,5,6,7,8,9,10];
    element = 6
    
    if search(array, 0, array.length - 1, element)
        puts "Find!"
    else 
        puts "Not Found!"
    end
end

def search(array, low, high, element)
    while low <= high
        middle = (high + low) / 2
        if array[middle] == element
            return true
        elsif array[middle] < element
            low = middle + 1
        else 
            high = middle - 1
        end
    end
    return false
end

main()