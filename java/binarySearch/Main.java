public class Main 
{
    public static void main(String[] args) 
    {
        int[] array = {1,2,3,4,5,6,7,8,9,10};
        int element = 5;
        
        BinarySearch bs = new BinarySearch();

        if(bs.search(array, 0, 9, element))
            System.out.println("Find!");
        else
            System.out.println("Not Found!");
    }
}