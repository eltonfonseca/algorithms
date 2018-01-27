public class Factorial
{
    public Factorial(int number)
    {
        int fat = 1;
        for(int i = 1; i <= number; i++)
            fat *= i;
        System.out.println(fat);
    }
}