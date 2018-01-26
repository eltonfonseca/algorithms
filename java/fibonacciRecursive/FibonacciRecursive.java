public class FibonacciRecursive
{
    public int fibonacci(int term)
    {
        if(term == 1 || term == 2)
            return 1;
        else
            return fibonacci(term - 1) + fibonacci(term - 2);
    }
}