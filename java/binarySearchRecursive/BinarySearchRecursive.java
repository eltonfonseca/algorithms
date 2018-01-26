public class BinarySearchRecursive
{
    public boolean search(int[] array, int low, int high, int element)
    {
        int middle = low + (high - low) / 2;

        if(high < low)
            return false;
        if(element < array[middle])
            return search(array, low, middle - 1, element);
        else if(element > array[middle])
            return search(array, middle + 1, high, element);
        else 
            return true;
    }
}