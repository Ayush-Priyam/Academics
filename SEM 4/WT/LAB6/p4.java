import java.util.Scanner;

public class p4 
{
    public static void main(String[] args) {
        int r, c, i, j;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows and cols:");
        r = sc.nextInt();
        c = sc.nextInt();
        int a[][] = new int[r][c];
        int t[][] = new int[c][r];
        System.out.println("Enter the elements: ");
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
            {
                a[i][j] = sc.nextInt();
                t[j][i] = a[i][j];

            }
        System.out.println("Original matrix:");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                    System.out.print(a[i][j] + "  ");
            }
            System.out.println();
        }
        System.out.println("\nTranspose matrix:");
        for (i = 0; i < c; i++) {
            for (j = 0; j < r; j++) {
                System.out.print(t[i][j] + "  ");
            }
            System.out.println();
        }
        sc.close();
    }
}
