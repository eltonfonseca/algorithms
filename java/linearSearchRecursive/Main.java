public class Main
{
    public static void main(String[] args) 
    {
        int[] array = {1,2,3,4,5,6,7,8,9,10};

        LinearSearchRecursive linearRecursive = new LinearSearchRecursive();

        if(linearRecursive.search(array, array.length - 1, 8))
            System.out.println("Find!");
        else
            System.out.println("Not Found!");    
    }
}