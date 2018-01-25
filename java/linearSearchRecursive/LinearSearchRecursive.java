public class LinearSearchRecursive
{
    public boolean search(int[] array, int element, int value)
    {
        if(element < 0)
            return false;
        else if(array[element] == value)
            return true;
        else
            return search(array, element - 1, value);
    }
}