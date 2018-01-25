#   Linear Search Algorithm in Ruby
#
#   Author: Elton Fonseca
#

def main()
    @array = [1,2,3,4,5,6,7,8,9,10]

    if(search(@array, 5))
        puts("Find!")
    else
        puts("Not Found!")
    end 
end

def search(array, value)
    array.each do |element|
        if(element == value)
            return true
        end
    end
    return false
end

main()