# Factorial Recursive Algorithm in Ruby
#
# Author: Elton Fonseca
#

def factorial(number)
    if number == 0
        return 1
    else 
        return number * factorial(number - 1)
    end
end

puts factorial(5)