public class Main 
{
    public static void main(String[] args) 
    {
        int[] array = {1,2,3,4,5,6,7,8,9,10};

        LinearSearch linear = new LinearSearch();

        if(linear.search(array, array.length, 7))
            System.out.println("Find!");
        else
            System.out.println("Not Found!");
    }
}