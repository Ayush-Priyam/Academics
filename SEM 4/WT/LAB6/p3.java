import java.util.Scanner;
//Scanner x= new Scanner(System.in);
public class p3 
{
    public static void main(String[] args) 
    {
        int r, c, i, j;
        Scanner sc= new Scanner(System.in);
            System.out.println("Enter the number of rows and cols:");
            r = sc.nextInt();
            c = sc.nextInt();
            int a[][] = new int[r][c];
            System.out.println("Enter the elements: ");
            for (i = 0; i < r; i++)
                for (j = 0; j < c; j++)
                    a[i][j] = sc.nextInt();
            System.out.println("Lower Triangular matrix:");
            for (i = 0; i < r; i++) 
            {
                for (j = 0; j < c; j++)
                {
                    if(j<=i) System.out.print(a[i][j] + "  ");
                    else System.out.print("0  ");
                }
                System.out.println();
            }
            sc.close();
        }
}
