public class LinearSearch 
{
    public boolean search(int[] array, int size, int value)
    {
        for(int i = 0; i < size; i++)
        {
            if(array[i] == value)
                return true;
        }
        return false;
    }
}
