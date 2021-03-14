class Stack
  def initialize(stack)
    @stack = stack
  end

  def push(value)
    @stack << value
  end

  def pop
    return if @stack.empty?

    last_index = @stack.length - 1
    @stack.delete @stack[last_index]
  end

  def show
    p @stack
  end
end
