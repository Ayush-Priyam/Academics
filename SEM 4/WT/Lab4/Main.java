import java.util.Scanner;

public class Main {
    public void area(float x) {
        System.out.println("the area of the square is " + Math.pow(x, 2) + " sq units");
    }

    public void area(float x, float y) {
        System.out.println("the area of the triangle is " + 1 / 2 * x * y + " sq units");
    }

    public void area(double x) {
        double z = 3.14 * x * x;
        System.out.println("the area of the circle is " + z + " sq units");
    }
   public static void main(String args[]) 
	{
	    Scanner sc = new Scanner(System.in);
	Main ar = new Main();
        System.out.println("Enter 1 to claculate area of circle, 2 for triangle and 3 for square: ");
        int choice = sc.nextInt();
        if(choice==1)
        {
            System.out.println("Enter the radius of the circle: ");
            double x = sc.nextInt();
            ar.area(x);
        }
        else if(choice==2)
        {
            System.out.println("Enter the base and height of the triangle: ");
            int x = sc.nextInt();
            int y = sc.nextInt();
            ar.area(x,y);
        }
        else if(choice==3)
        {
            System.out.println("Enter the side of the square: ");
            float x = sc.nextInt();
            ar.area(x);
        }
        else
            System.out.println("Enter a valid key");

            sc.close();
    }
}