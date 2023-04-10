/*4. Create an user defined exception named Check Argument to check the
number of arguments passed through command line. If the number of
arguments is less than four, throw the Check Argument exception, else print the
addition of squares of all the four elements.*/
class CheckArgumentException extends Exception {}
public class p4 
{
    public static void main(String[] args) 
    {
        try
        {
            int num = args.length;
            if(num<4) 
            {
                throw new CheckArgumentException();
            } 
            else
            {
                int a[]= new int[4];
                int sum=0;
                for(int i=0; i<4; i++)
                {
                    a[i]=Integer.parseInt(args[i]);
                    sum= a[i]*a[i]+sum;
                }
                System.out.println("Sum of squares=" +sum);
            }
        }
        catch(CheckArgumentException e)
        {
            System.out.println("Invalid arguments");
        }
    } 
}