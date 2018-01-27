#/*************************************************************************
#*                   The Problem Solved Kings in Ruby                     *
#* ---------------------------------------------------------------------- *
#*                                                                        *
#* POC: $ ruby kings.rb                                                      *
#*                                                                        *
#* Autor: Elton Fonseca                                                   *
#* http://www.fb.com/elton.junior6                                        *
#**************************************************************************/

def kings(rows, columns)
    king = 0
    i = 1
    while i <= rows 
        j = 1
        while j <= columns
            king += 1
            j += 2
        end
        i += 2
    end
    puts king
end

kings(10, 10)