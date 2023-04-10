package general;
import java.util.*;
public abstract class employee {
    private int empId;
    protected String ename;
    abstract public void earnings();
    public void input()
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter emp name: ");
        ename = sc.nextLine();
        System.out.println("Enter empId: ");
        empId = sc.nextInt();
        //sc.close();
    }
    public void details()
    {
        System.out.println("Emp name: " + ename);
        System.out.println("Emp Id: " + empId);
    }

}// package general;
// import java.util.*;
// public class employee 
// {
//     private String ename;
//     protected int empid;
//     public double earnings(int bs)
//     {
//         double te= bs+.80*bs+.15*bs;
//         return te;
//     }
//     public void printd()
//     {
//         System.out.println("Name: " + ename+ "\nID: "+empid);
//     }
//     public void inp()
//     {
//         Scanner sc= new Scanner(System.in);
//         System.out.println("Enter name, id");
//         ename= sc.nextLine();
//         empid= sc.nextInt();
//         sc.close();
//     }
// }
