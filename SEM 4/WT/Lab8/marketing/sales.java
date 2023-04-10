package marketing;

import general.*;
import java.util.*;

class sales extends employee {
    int sal;

    public void earnings() {
        Scanner sc = new Scanner(System.in);
        input();
        System.out.println("Enter emp salary: ");
        sal = sc.nextInt();
        double res = sal + (0.08 * sal) + (0.15 * sal);
        sc.close();
        details();
        System.out.println("Emp basic salary: " + sal);
        System.out.println("Emp total earnings: " + res);

    }

    public void tallowance() {
        double tres = (0.05 * sal);
        System.out.println("Emp travelling allowance: " + tres);

    }

    public static void main(String[] args) {
        sales s = new sales();
        s.earnings();
        s.tallowance();
    }
}// package marketing;
// import general.employee;
// public class sales extends employee
// {
//     public void tallowance()
//     {
//         // let basic sal is 10000
//         double te= earnings(10000);
//         double ta= .05*te;
//         printd();
//         System.out.println("Total earnings: " + te);
//         System.out.println("Travel Allownace: "+ta);
//     }
//     public static void main(String args[])
//     {
//         sales s = new sales();
//         s.inp();
//         s.tallowance();
//     }
// }
