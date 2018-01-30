#!/user/bin/ruby

#   Exponentiation Recursive Algorithm in Ruby
#
# Coded by - Elton Fonseca
#

def exponentiation(base, exponent)
    if exponent == 0
        return 1
    else
        return base * exponentiation(base, exponent - 1)
    end
end

puts exponentiation(2, 10)