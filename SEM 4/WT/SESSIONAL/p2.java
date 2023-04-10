import java.util.Scanner;
interface Person {
    char calc_grade();
    void display_grade();
    void input();
}

class Employee implements Person {
    int emp_code, contact, details;
    String name, des;

    public void input() {
        // input Statements
    }

    public char calc_grade() {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter marks:");
        int x= sc.nextInt();
        sc.close();
        if (x >= 90)
            return 'O';
        if (x >= 80)
            return 'E';
        if (x >= 70)
            return 'A';
        if (x >= 60)
            return 'B';
        if (x >= 50)
            return 'C';
        else
            return 'F';
        
    }

    public void display_grade() {
        // nothing
    }
}
class student implements Person {
    int roll, c;
    String name;

    public void input() {
        // input
    }

    public void display_grade() {
        Employee e = new Employee();
        char c = e.calc_grade();
        if (c == 'O')
            System.out.println("95%");
        if (c == 'E')
            System.out.println("85%");
        if (c == 'A')
            System.out.println("75%");
        if (c == 'B')
            System.out.println("65%");
        if (c == 'C')
            System.out.println("55%");
        if (c == 'F')
            System.out.println("Fail");
    }
    public char calc_grade()
    {
        //notjing
        return ' ';
    }
}

public class p2 {
    public static void main(String[] args) {
        student s = new student();
        s.display_grade();
    }
}