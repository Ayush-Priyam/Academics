import java.util.*;
public class Matrix 
{
    int r,c;
    int a[][];
    Scanner sc= new Scanner(System.in);
    Matrix()
    {
        getrows();
        getcols();
        a= new int[r][c];
    }
    Matrix(int ra, int b) 
    {
        r=ra;
        c=b;
        a = new int[r][c];
    }
    void getrows()
    {
        System.out.print("Enter the no of rows: ");
        r=sc.nextInt();
    }
    void getcols()
    {
        System.out.print("Enter the no of cols: ");
        c = sc.nextInt();
    }
    void set()
    {
        int i,j;
        // getrows();
        // getcols();
        //Matrix();
        System.out.print("Enter the elements of the matrix: ");
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                a[i][j] = sc.nextInt();
    }
    void display()
    {
        int i,j;
        for (i = 0; i < r; i++) 
        {
            for (j = 0; j < c; j++)
                System.out.print(a[i][j] + "  ");
            System.out.println();
        }
    }
    void add(Matrix A, Matrix B)
    {
        // Matrix A= new Matrix();
        // Matrix B= new Matrix();
        // A.set();
        // B.set();
        int i, j;
        if(A.r!=B.r || A.c!=B.c)
        {
            System.out.println("\nCant Add matrix");
            return;
        }
        r=A.r;
        c=A.c;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                a[i][j] = A.a[i][j] + B.a[i][j];
            }
        }
        System.out.println("\nAdded matrix:");
        display();
    }
    void mul(Matrix A, Matrix B)
    {
        int i,j,k;
        if (A.c != B.r) 
        {
            System.out.println("\nCannot Multipliy\n");
            return;
        }
        for (i = 0; i < A.r; i++) 
        {
            for (j = 0; j < B.c; j++) 
            {
                for (k = 0; k < B.r; k++)
                    a[i][j] += A.a[i][k] * B.a[k][j];
            }
        }
        System.out.println("\nMultiplied Matrix:");
        display();
    }
    public static void main(String args[]) 
    {
        Matrix A= new Matrix();
        Matrix B= new Matrix();
        A.set();
        B.set();
        System.out.println("\nMatrix 1:");
        A.display();
        System.out.println("\nMatrix 2:");
        B.display();
        Matrix C= new Matrix(A.r, A.c);
        C.add(A,B);
        Matrix D= new Matrix(A.r, B.c);
        D.mul(A, B);
    }
}
