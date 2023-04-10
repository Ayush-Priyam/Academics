package pack2;
import pack1.Person;
class student implements pack1.Person 
{
    int roll, c;
    String name;
    public void input()
    {
        //input 
    }
    public void display_grade()
    {
        pack1.Employee e= new pack1.Employee();
        char c= e.calc_grade();
        if(c=='O')
            System.out.println("95%");
        if (c == 'E')
            System.out.println("85%");
        if (c == 'A')
            System.out.println("75%");
        if (c == 'B')
            System.out.println("65%");
        if (c == 'C')
            System.out.println("55%");
        if(c=='F')
            System.out.println("Fail");
    }
}
public class stu{
    public static void main(String[] args)
    {
        student s= new student();
        s.display_grade();
    }
}