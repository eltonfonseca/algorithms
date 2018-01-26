public class Fibonacci
{
    public Fibonacci(int term)
    {
        int fib0 = 1, fib1 = 1, aux;

        System.out.print(fib0 + " " + fib1 + " ");
        for(int i = 3; i <= term; i++)
        {
            aux = fib0 + fib1;
            fib0 = fib1;
            fib1 = aux;

            System.out.print(fib1 + " ");
        }
        System.out.println();
    }
}