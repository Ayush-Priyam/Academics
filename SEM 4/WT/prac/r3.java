import java.io.FileReader;
import java.util.*;
public class r3 {
    public static void main(String[] args)
    {
        int x=0;
        try {
            FileReader f= new FileReader("abc.txt");
            Scanner in = new Scanner(f);
            String s1 = in.next();
            in.close();
            if(s1==null) System.out.println("Empty File");
            for(; s1!=null; )
            { x=1;
                System.out.print(s1 + ".");
                s1 = in.next();
            }
            in.close();
        } catch (NoSuchElementException e) {
            if(x==0) 
                System.out.println("No file");
            System.out.println("\nOKKKKK");
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}