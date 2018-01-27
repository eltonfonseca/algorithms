public class Kings
{
    public static void main(String[] args) 
    {
        int rows, columns, i, j, king = 0;

        if(args.length == 0 || args.length < 2 || args.length > 2)
            System.out.println("Error!");
        else
        {
            rows = Integer.parseInt(args[0]);
            columns = Integer.parseInt(args[1]);
            i = 1;

            while(i <= rows)
            {
                j = 1;
                while(j <= columns)
                {
                    king++;
                    j += 2;
                }
                i += 2;
            }
            System.out.println("Kings: " + king);
        }
    }
}