#   Linear Search Recursive Algorithm in Ruby
#
#   Author: Elton Fonseca
#

def main()
    @array = [1,2,3,4,5,6,7,8,9,10]

    if(search(@array, @array.length - 1, 7))
        puts("Find!")
    else
        puts("Not Found!")
    end 
end

def search(array, element, value)
    if(element < 0)
        return false
    elsif(array[element] == value)
        return true
    else
        return search(array, element - 1, value)
    end
end

main()