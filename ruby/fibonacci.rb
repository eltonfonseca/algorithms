# Fibonacci Algorithm in Ruby
#
# Author: Elton Fonseca
# 

def fibonacci(term)
    fib0 = 1
    fib1 = 1

    puts fib0
    puts fib1

    for i in 3..term  do
        aux = fib0 + fib1
        fib0 = fib1
        fib1 = aux
        puts fib1
    end
end

fibonacci(10)