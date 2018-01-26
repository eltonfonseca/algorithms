# Fibonacci Recursive Algorithm in Ruby
#
# Author: Elton Fonseca
# 

def fibonacci(term)
    if term == 1 || term == 2
        return 1
    else
        return fibonacci(term - 1) + fibonacci(term - 2) 
    end
end

puts fibonacci(10)