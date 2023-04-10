//1. Write a Java program to generate an ArrayIndexOutofBoundsException and handle it using catch statement.
public class p1
{
public
    static void main(String args[])
    {
        int a[]={1,2,3};
        try 
        {
            a[5]=6;
            System.out.println("A[5]: "+a[5]);
        } 
        catch (ArrayIndexOutOfBoundsException e) 
        {
            System.out.println(e);
        }
        System.out.println("After try catch block");
    }
}