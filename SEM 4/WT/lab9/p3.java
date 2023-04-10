//3. Write a Java program to illustrate try..catch..finally block.
public class p3
{
    public static void main(String args[]) {
        try 
        {
            int a = 1 / 0;
            System.out.println(a);
        } 
        catch (ArithmeticException e) 
        {
            System.out.println(e);
        } 
        catch(Exception e)
        {
            System.out.println(e);
        }
        finally 
        {
            System.out.println("Finally block");
        }
        System.out.println("After finally block");
    }
}