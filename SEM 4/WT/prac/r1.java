import java.io.*;
public class r1 
{
public static void main(String args[]) 
{
    Console c=System.console(); 
    System.out.println("Enter password: "); 
    char[] ch=c.readPassword(); 
    String pass=String.valueOf(ch); 
    System.out.println("Password is: "+pass);
    for(int i=0; i<ch.length;i++)
    {
        System.out.print(ch[i]);
    }
}
}