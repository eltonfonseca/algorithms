require './stack'

stack = Stack.new []

puts "Inserting value #{stack.push 23}"
puts "Inserting value #{stack.push 14}"
puts "Inserting value #{stack.push 55}"
puts "Inserting value #{stack.push 66}"

puts 'Show stack'
stack.show

puts "Deleting value #{stack.pop}"
puts "Deleting value #{stack.pop}"

puts 'Show stack'
stack.show