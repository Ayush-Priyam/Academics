import java.util.*;
public class Shape 
{
    void area(double r) 
    {
        double ar = 3.14 * r * r;
        System.out.println("Area of the circle: " + ar + " sq.units");
    }
    void area(double a, double b, double c) 
    {
        double s= (a+b+c)/2.0;
        double ar= Math.sqrt(s*(s-a)*(s-b)*(s-c));
        System.out.println("Area of the triangle: " + ar + " sq.units");
    }
    void area(int a) 
    {
        System.out.println("Area of the square: " + (a*a) + " sq.units\n");
    }
    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter choice to find area\n1: circle \t 2: triangle \t 3: square: ");
        int c = sc.nextInt();
        Shape s = new Shape();
        System.out.println();
        switch(c)
        {
            case 1:
                    System.out.println("Enter the radius of the circle: ");
                    double r = sc.nextDouble();
                    s.area(r);
                    break;
            case 2:
                    System.out.println("Enter the 3 sides of a triangle: ");
                    double x = sc.nextDouble();
                    double y = sc.nextDouble();
                    double z=  sc.nextDouble();
                    s.area(x,y,z);
                    break;
            case 3:
                    System.out.println("Enter the side of the square: ");
                    int a = sc.nextInt();
                    s.area(a);break;
            default: 
                    System.out.println("Invalid Choice");
        }
        sc.close();
        // s.area(7.9);//circle
        // s.area(10.3, 16, 13);//triangle
        // s.area(2);//square
    }
}
