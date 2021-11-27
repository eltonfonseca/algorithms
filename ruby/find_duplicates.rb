# Find duplicates elements on array
#
# This algorithm is a O(n) complexity
# Author: Elton Fonseca
#

def find_duplicates(elements)
  store = {}
  duplicates = []

  elements.map do |element|
    store[element] = (store[element] || 0) + 1
    duplicates << element if store[element] > 1
  end

  duplicates
end

p find_duplicates([1, 1, 2, 4, 5, 3, 2, 8, 8, 5])
