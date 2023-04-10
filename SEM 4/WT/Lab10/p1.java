/*1. Write a program to perform following operations on user entered strings –
i) Change the case of the string
ii) Reverse the string
iii) Compare two strings
iv) Insert one string into another string*/
import java.util.*;
public class p1
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter string");
        String s1= sc.nextLine();
        String s=s1;
        StringBuffer ss= new StringBuffer(s);
        System.out.println("Lowercase: "+s.toLowerCase()+"\nuppercase: "+s.toUpperCase()+"\nreverse: "+ss.reverse());
        System.out.println("Enter another string");
        String s2 = sc.nextLine();
        int d= s1.compareToIgnoreCase(s2);
        if(d==0)
            System.out.println("Equal");
        else
            System.out.println("Not Equal");
        String n= s1.substring(0,3)+s2+s1.substring(3);
        System.out.println("New String: "+n);
        sc.close();
    }
}