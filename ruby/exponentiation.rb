#!/user/bin/ruby

#   Exponentiation Algorithm in Ruby
#
# Coded by - Elton Fonseca
#

def exponentiation(base, exponent)
    result = 1
    while exponent != 0
        result *= base
        exponent -= 1
    end
    return result
end

puts exponentiation(2, 10)