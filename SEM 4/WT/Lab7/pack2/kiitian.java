package pack2;
import pack1.student;
public class kiitian extends student
{
    public void course(int a, int b)
    {
        System.out.println("Hello, roll="+a+"\t reg="+b);
    }
    public static void main(String[] args)
    {
        student s= new kiitian();
        s.course(5,387);
    }
}
