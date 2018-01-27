# Factorial Algorithm in Ruby
#
# Author: Elton Fonseca
#

def factorial(number)
    fat = 1

    for i in 1..number do
        fat *= i
    end
    puts fat
end

factorial(5)