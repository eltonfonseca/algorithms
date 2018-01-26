public class BinarySearch
{
    public boolean search(int[] array, int low, int high, int element)
    {
        
        while(low < high)
        {
            int middle = low + (high - low) / 2;
            
            if(array[middle] == element)
                return true;
            else if(array[middle] < element)
                low = middle + 1;
            else 
                high = middle - 1;
        }
        return false;
    }
}