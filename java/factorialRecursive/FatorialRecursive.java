public class FatorialRecursive
{
    public static int fatorial(int number)
    {
        if(number == 0)
            return 1;
        else 
            return number * fatorial(number - 1);
    }
}