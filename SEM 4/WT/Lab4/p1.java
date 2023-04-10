import java.util.*;
public class p1 
{
    public static void main(String args[])
    {
        int m;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter students marks: ");
        m= scanner.nextInt();
        scanner.close();
        if(m>100 || m < 0 )
        {
            System.out.print("Invalid marks. Re run");
            System.exit(0);
        }
        if (m >= 90)  
            System.out.print("O Grade");
        else if(m>=80)
            System.out.print("E Grade");
        else if(m>=70)
           System.out.print("A Grade");
        else if(m>=60)
            System.out.print("B Grade");
        else if(m>=40)
            System.out.print("D Grade ");
        else
            System.out.println("F Grade");

    }
}
