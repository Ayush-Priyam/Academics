import java.util.*;
public class p2 
{
    public static void main(String args[]) 
    {
        int n, r, s = 0, tn;
        System.out.print("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.close();
        tn = n;
        while (n != 0) 
        {
            r = n%10;
            s = (s*10) + r;
            n = n/10;
        }
        if (tn == s)
            System.out.println(tn+ " is a Palindrome number ");
        else
            System.out.println(tn + " is Not a palindrome number");
    }
}