public class p3 
{
    public static void main(String[] args) 
    {
        int n=4;
        int i, j; char k = 'A';
        for (i = 1; i <= n; i++, k++) 
        {
            for (j = 1; j < i + 1; j++) 
            {
                System.out.print(k++);
            }
            System.out.println();
            //k++;
        }
    }   
}
